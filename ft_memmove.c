/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 01:31:12 by upolat            #+#    #+#             */
/*   Updated: 2024/04/22 08:51:36 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*chardst;
	const char	*charsrc;

	chardst = (char *)dst;
	charsrc = (const char *)src;
	if (chardst > charsrc)
	{
		i = len;
		while (i > 0)
		{
			chardst[i - 1] = charsrc[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			chardst[i] = charsrc[i];
			i++;
		}
	}
	return (dst);
}
