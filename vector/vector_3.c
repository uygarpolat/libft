/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:34:02 by upolat            #+#    #+#             */
/*   Updated: 2024/12/04 01:25:08 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

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

// Create a function vec_append which appends vector src to dst.

int	vec_append(t_vec *dst, t_vec *src)
{
	if (!dst || !src || !src->memory)
		return (-1);
	if (vec_resize(dst, dst->len + src->len + 2) < 0)
		return (-1);
	ft_memcpy(dst->memory + (dst->elem_size * (dst->len - 0)),
		vec_get(src, 0), src->elem_size * src->len);
	dst->len += src->len;
	return (1);
}

// Create a function vec_prepend which prepends vector src to dst.

int	vec_prepend(t_vec *dst, t_vec *src)
{
	if (!dst || !src || !src->memory)
		return (-1);
	if (vec_resize(dst, dst->len + src->len + 2) < 0)
		return (-1);
	ft_memmove(dst->memory + (src->elem_size * src->len),
		vec_get(dst, 0), dst->elem_size * dst->len);
	ft_memcpy(dst->memory, vec_get(src, 0), src->elem_size * src->len);
	dst->len += src->len;
	return (1);
}

// Create a function vec_iter which takes as an argument
// a function f applied to each element in the vector.

void	vec_iter(t_vec *src, void (*f) (void *))
{
	size_t	i;

	if (!src || !src->memory)
		return ;
	i = 0;
	while (i < src->len)
		f(vec_get(src, i++));
}

// Create a function vec_map which takes as an argument a function
// f applied to a copy of each element in the vector.
// The copied element will be added to vector dst.

int	vec_map(t_vec *dst, t_vec *src, void (*f) (void *))
{
	t_vec	src_temp;

	if (!dst || !src || !src->memory)
		return (-1);
	else if (!dst->memory)
	{
		if (vec_new(dst, 1, dst->elem_size) < 0)
			return (-1);
	}
	vec_new(&src_temp, src->len, src->elem_size);
	vec_copy(&src_temp, src);
	vec_iter(&src_temp, f);
	if (vec_append(dst, &src_temp) < 0)
		return (vec_free(&src_temp), -1);
	return (vec_free(&src_temp), 1);
}
