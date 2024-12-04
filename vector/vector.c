/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 00:50:27 by upolat            #+#    #+#             */
/*   Updated: 2024/12/04 02:55:55 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

// Print the state of the vector

void	vec_print(t_vec *src)
{
	size_t	i;

	i = 0;
	while (i < src->len)
	{
		ft_printf("%d ", src->memory[i * src->elem_size]);
		i++;
	}
	ft_printf("\nlen is %d | There is room for %d more.\n", src->len,
		(int)src->alloc_size / (int)src->elem_size - src->len);
}

// Create a function vec_new which will take a pointer to a t_vec
// and allocate len * elem_size bytes in the buffer as well as initialize
// its length and element size.

int	vec_new(t_vec *dst, size_t init_len, size_t elem_size)
{
	if (!dst || elem_size == 0)
		return (-1);
	dst->alloc_size = init_len * elem_size;
	dst->len = 0;
	dst->elem_size = elem_size;
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
	if (src->len * src->elem_size <= dst->alloc_size)
		copy_size = src->len * dst->elem_size;
	else
		copy_size = src->alloc_size;
	if (ft_memcpy(dst->memory, src->memory, copy_size) == NULL)
		return (vec_free(dst), -1);
	dst->len = copy_size / dst->elem_size;
	return (1);
}
