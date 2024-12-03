/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 00:51:20 by upolat            #+#    #+#             */
/*   Updated: 2024/12/04 00:59:43 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

// Create a function vec_resize which will take in a target_size parameter
// and either shrink (destructively) or grow the vector to the target size,
// copying the old contents over to the new allocation.

int	vec_resize(t_vec *src, size_t target_size)
{
	t_vec	temp_dst;

	if (!src)
		return (-1);
	if (vec_new(&temp_dst, src->alloc_size
			/ src->elem_size, src->elem_size) < 0)
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
	return (vec_free(&temp_dst), 1);
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
