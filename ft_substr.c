/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 01:04:03 by upolat            #+#    #+#             */
/*   Updated: 2024/04/18 16:38:52 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sublen;
	char	*substr;

	sublen = 0;
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

int	main(void)
{
	printf("%s\n", ft_substr("Hello World!", 7, 11));
	return (0);
}
*/
