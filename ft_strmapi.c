/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:25:02 by upolat            #+#    #+#             */
/*   Updated: 2024/04/18 17:32:15 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				len;
	char			*new_str;

	i = 0;
	len = ft_strlen((char *)s);
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	while (s[i])
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
#include <stdio.h>

char	increase_char(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}

int main()
{
	char	input[] = "Hello, World!";
	char	*result;
	
	result = ft_strmapi(input, &increase_char);

	if (result == NULL)
		return (1);
	printf("Original string: %s\n", input);
	printf("Modified string: %s\n", result);
	free(result);
	return (0);
}
*/
