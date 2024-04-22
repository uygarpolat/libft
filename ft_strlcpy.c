/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:05:28 by upolat            #+#    #+#             */
/*   Updated: 2024/04/22 08:52:05 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	size_t	i;
	size_t	counter;

	counter = 0;
	while (source[counter])
		counter++;
	i = 0;
	while (source[i] != '\0' && i + 1 < size)
	{
		destination[i] = source[i];
		i++;
	}
	if (size > 0)
		destination[i] = '\0';
	return (counter);
}
/*
#include <stdio.h>

int	main(void)
{
	char			source1[6] = "Hello";
	char			dest1[6];
	size_t			len1;
	char			source2[6] = "Hello";
	char			dest2[6];
	size_t			len2;
	size_t			size1;
	unsigned int	size2;

	size1 = 6;
	size2 = 6;
	len1 = strlcpy(dest1, source1, size1);
	len2 = ft_strlcpy(dest2, source2, size2);
	printf("for    strlcpy, dest is %s and return value is %zu\n", dest1, len1);
	printf("for ft_strlcpy, dest is %s and return value is %zu\n", dest2, len2);

	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);
	printf("%d\n", ft_strlcpy(dest, src, 0) == strlen(src) && dest[0] == 'A');
	printf("%s\n", dest);
}
*/
