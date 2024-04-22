/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 02:40:43 by upolat            #+#    #+#             */
/*   Updated: 2024/04/22 09:01:08 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i])
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	*str_dup;
	char	*ft_str_dup;

	if (argc == 2)
	{
		str = argv[1];
		str_dup = strdup(str);
		ft_str_dup = ft_strdup(str);
		printf("%s-%s\n", strdup(str_dup), ft_strdup(ft_str_dup));
		free(str_dup);
		free(ft_str_dup);
	}
	return (0);
}
*/
