/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 02:52:58 by upolat            #+#    #+#             */
/*   Updated: 2024/12/04 02:56:48 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"

void	vec_free_all(t_vec *src, int flag)
{
	size_t	i;
	void	*elem;

	if (!src || src->alloc_size == 0)
		return ;
	if (flag)
	{
		i = 0;
		while (i < src->len)
		{
			elem = (char *)src->memory + (i * src->elem_size);
			free_void((void **)elem, NULL);
			i++;
		}
	}
	free_void((void **)&src->memory, NULL);
	src->elem_size = 0;
	src->alloc_size = 0;
	src->len = 0;
}
