/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:24:58 by upolat            #+#    #+#             */
/*   Updated: 2024/04/19 12:02:18 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	k = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
		j++;
	if (size < i)
		return (j + size);
	while (src[k] != 0 && i + 1 < size)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = 0;
	return (j + i - k);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[15] = "Hello ";
	char	str2[15] = "Hello ";

	printf("%lu\n", strlcat(str1, "World!", sizeof(str1)));
	printf("%s\n", str1);
	printf("%zu\n", ft_strlcat(str2, "World!", sizeof(str2)));
	printf("%s\n", str2);

	char	str3[7] = "Hello ";
	char	str4[7] = "Hello ";

	printf("%lu\n", strlcat(str3, "World!", 7));
	printf("%s\n", str3);
	printf("%zu\n", ft_strlcat(str4, "World!", 7));
	printf("%s\n", str4);

	char	str5[1] = "";
	char	str6[1] = "";

	printf("%lu\n", strlcat(str5, "World!", sizeof(str5)));
	printf("%s\n", str5);
	printf("%zu\n", ft_strlcat(str6, "World!", sizeof(str6)));
	printf("%s\n", str6);

	char	str7[7] = "Hello ";
	char	str8[7] = "Hello ";

	printf("%lu\n", strlcat(str7, "Worldddd!", 2));
	printf("%s\n", str7);
	printf("%zu\n", ft_strlcat(str8, "Worldddd!", 2));
	printf("%s\n", str8);

	char	dest[50] = "Whataworld";
	char	dest_ft[50] = "Whataworld";
	char	src[50] = "Hello, ";
	int		buf;

	buf = 2;
	printf("    strlcat-> %lu, %s\n", strlcat(dest, src, buf), dest);
	printf("ft_strlcat -> %zu, %s", ft_strlcat(dest_ft, src, buf), dest_ft);
}
*/
