/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 01:04:03 by upolat            #+#    #+#             */
/*   Updated: 2024/04/22 09:01:43 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sublen;
	char	*substr;

	sublen = 0;
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	while (s[start] != '\0' && sublen < len)
	{
		start++;
		sublen++;
	}
	substr = malloc(sizeof(char) * (sublen + 1));
	if (substr == NULL)
		return (NULL);
	start = start - sublen;
	sublen = 0;
	while (s[start] != '\0' && sublen < len)
	{
		substr[sublen] = s[start];
		sublen++;
		start++;
	}
	substr[sublen] = '\0';
	return (substr);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n", ft_substr("Hello World!", 15, 11));
	char *s = ft_substr("tripouille", 100, 1);
	printf("%d|", !strcmp(s, ""));
	char *s2 = ft_substr("tripouille", 0, 42000);
	printf("%d\n", !strcmp(s2, "tripouille"));
	printf("%s\n", ft_substr("01234", 10, 10));
	return (0);
}
*/
