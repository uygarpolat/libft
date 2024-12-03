/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:34:02 by upolat            #+#    #+#             */
/*   Updated: 2024/12/03 03:38:24 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"
#include <stdio.h>
#include <assert.h>

// Create a function vec_new which will take a pointer to a t_vec
// and allocate len * elem_size bytes in the buffer as well as initialize
// its length and element size.

int	vec_new(t_vec *dst, size_t init_len, size_t elem_size)
{
	if (elem_size == 0 || !dst)
		return (-1);
	dst->elem_size = elem_size;
	dst->alloc_size = init_len * elem_size;
	dst->len = 0;
	if (init_len == 0)
		dst->memory = NULL;
	else
	{
		dst->memory = ft_calloc(init_len, elem_size);
		if (!dst->memory)
			return (-1);
	}
	return (1);
}

void	vec_free(t_vec *src)
{
	if (!src || src->alloc_size == 0)
		return ;
	free_void((void **)&src->memory, NULL);
	src->elem_size = 0;
	src->alloc_size = 0;
	src->len = 0;
}

// Create a function vec_from which takes in a pointer to some memory,
// which then will be copied over to the new vector.

int	vec_from(t_vec *dst, void *src, size_t len, size_t elem_size)
{
	if (!dst || !src || elem_size == 0)
		return (-1);
	if (vec_new(dst, len, elem_size) < 0)
		return (-1);
	if (ft_memcpy(dst->memory, src, dst->alloc_size) == NULL)
		return (vec_free(dst), -1);
	dst->len = len;
	return (1);
}

// Create a function vec_copy. The copy function is very simple and will
// only copy at most as many bytes as are available in the dst vector.

int	vec_copy(t_vec *dst, t_vec *src)
{
	size_t	copy_size;

	if (!dst || !src || !src->memory)
		return (-1);
	if (!dst->memory)
	{
		if (vec_new(dst, src->len, dst->elem_size) < 0)
			return (-1);
	}
	if (src->len * src->elem_size < dst->alloc_size)
		copy_size = src->len * src->elem_size;
	else
		copy_size = src->alloc_size;
	if (ft_memcpy(dst->memory, src->memory, copy_size) == NULL)
		return (vec_free(dst), -1);
	dst->len = copy_size / dst->elem_size;
	return (1);
}

// Create a function vec_resize which will take in a target_size parameter
// and either shrink (destructively) or grow the vector to the target size,
// copying the old contents over to the new allocation.

int	vec_resize(t_vec *src, size_t target_size)
{
	t_vec	temp_dst;

	if (!src)
		return (-1);
	if (vec_new(&temp_dst, src->len, src->elem_size) < 0)
		return (-1);
	if (vec_copy(&temp_dst, src) < 0)
		return (vec_free(&temp_dst), -1);
	free_void((void **)&src->memory, NULL);
	src->memory = ft_calloc(target_size, src->elem_size);
	if (src->memory == NULL)
		return (vec_free(&temp_dst), -1);
	src->alloc_size = target_size * src->elem_size;
	src->len = 0;
	if (vec_copy(src, &temp_dst) < 0)
		return (vec_free(&temp_dst), -1);
	return (1);
}

// Create a function vec_push which takes in a vector and a pointer
// to an element to be pushed to the end of the vector.

int	vec_push(t_vec *dst, void *src)
{
	if (!dst || !src)
		return (-1);
	if (dst->alloc_size <= dst->elem_size * dst->len)
	{
		if (vec_resize(dst, ((dst->len + 1) * 2)) < 0)
			return (-1);
	}
	ft_memcpy(dst->memory + (dst->elem_size * dst->len), src, dst->elem_size);
	dst->len++;
	return (1);
}

// Create a function vec_pop which will remove the last element
// from the vector and copy it to dst.

int	vec_pop(void *dst, t_vec *src)
{
	if (!dst || !src)
		return (-1);
	else if (!src->memory || src->len == 0)
		return (0);
	ft_memcpy(dst, src->memory
		+ (src->elem_size * (src->len - 1)), src->elem_size);
	src->len--;
	return (1);
}

// Create a function vec_get which returns an opaque handle to the
// element at index.

void	*vec_get(t_vec *src, size_t index)
{
	if (!src || src->len < index + 1)
		return (NULL);
	return (src->memory + (src->elem_size * index));
}

// Create a function vec_insert which will insert a new element at any position
// in the vector without overwriting existing elements.

int	vec_insert(t_vec *dst, void *src, size_t index)
{
	if (!dst || !src || dst->len < index)
		return (-1);
	if (dst->len == index)
	{
		if (vec_push(dst, src) < 0)
			return (-1);
		return (0);
	}
	if (dst->alloc_size <= dst->elem_size * dst->len)
		if (vec_resize(dst, ((dst->len + 1) * 2)) < 0)
			return (-1);
	ft_memmove(vec_get(dst, index + 1), vec_get(dst, index),
		(dst->len - index) * dst->elem_size);
	ft_memcpy(vec_get(dst, index), src, dst->elem_size);
	dst->len++;
	return (0);
}

// Create a function vec_remove which will remove an element from any position
// in the vector without overwriting existing elements.

int	vec_remove(t_vec *src, size_t index)
{
	if (!src || src->len < index)
		return (-1);
	if (src->len == index)
	{
		src->len--;
		return (0);
	}
	ft_memmove(vec_get(src, index), vec_get(src, index + 1),
		(src->len - index - 1) * src->elem_size);
	src->len--;
	return (0);
}
