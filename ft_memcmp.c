/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 03:05:59 by upolat            #+#    #+#             */
/*   Updated: 2024/04/22 08:59:37 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*chars1;
	const char	*chars2;

	chars1 = (const char *)s1;
	chars2 = (const char *)s2;
	while (0 < n--)
	{
		if (*chars1 != *chars2)
			return ((unsigned char)*chars1 - (unsigned char)*chars2);
		chars1++;
		chars2++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char s[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	printf("%d|", memcmp(s, s2, 1));
	printf("%d\n", ft_memcmp(s, s2, 1));
	
	printf("%d|", memcmp(s2, s, 1));
	printf("%d\n", ft_memcmp(s2, s, 1));
}
*/
