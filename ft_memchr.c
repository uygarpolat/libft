/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 02:39:02 by upolat            #+#    #+#             */
/*   Updated: 2024/04/20 21:40:24 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (*str == (char)c)
			return ((void *)str);
		str++;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    printf("%s|", (char *)memchr(tab, -1, 7));
    printf("%s\n", (char *)ft_memchr(tab, -1, 7));
	return (0);
}
*/
