/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 01:51:36 by upolat            #+#    #+#             */
/*   Updated: 2024/04/09 03:17:25 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*destchar;
	const char	*srcchar;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	destchar = (char *)dest;
	srcchar = (const char *)src;
	while (i < n)
	{
		*destchar = *srcchar;
		destchar++;
		srcchar++;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	int		intsrc;
	int		intdest;
	char	charsrc[] = "Helloworld";
	char	chardest[20];

	intsrc = 123456;
	ft_memcpy(&intdest, &intsrc, sizeof(int));
	printf("Dest integer: %d\n", intdest);
	ft_memcpy(chardest, charsrc, sizeof(charsrc));
	printf("Dest string: %s\n", chardest);
	return (0);
}
*/
