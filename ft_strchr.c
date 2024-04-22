/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 02:00:24 by upolat            #+#    #+#             */
/*   Updated: 2024/04/22 08:57:40 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s[] = "tripouille";
	printf("%s|%s\n", strchr("abc", '\0'), ft_strchr("abc", '\0'));
	printf("%d|", strchr(s, 't' + 512) == s);
	printf("%d\n", ft_strchr(s, 't' + 512) == s);
	printf("%c\n", 't' + 512);
	printf("%s\n", ft_strchr("teste", '\0'));
	return (0);
}
*/
