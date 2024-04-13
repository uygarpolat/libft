/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 02:20:08 by upolat            #+#    #+#             */
/*   Updated: 2024/04/14 01:19:04 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word_amount_checker(char const *str, int c)
{
	int	counter;
	int	flag;

	counter = 0;
	if (str[0] != c)
		counter = 1;
	flag = 0;
	while (*str)
	{
		while (*str == c)
		{
			str++;
			flag = 1;
		}
		if (flag == 1)
		{
			if (!*str)
				break ;
			flag = 0;
			counter++;
			str--;
		}
		str++;
	}
	return (counter);
}

void	copy_characters(char *s, const char *str, int i, int counter)
{
	int	flag;

	flag = 0;
	while (flag < counter)
	{
		s[flag] = str[i - counter];
		i++;
		flag++;
	}
}

char	*ft_word_length_checker(char const *str, int c, int i, int counter)
{
	int		flag;
	char	*s;

	flag = 0;
	while (str[i] != '\0')
	{
		while (str[i] != c)
		{
			flag = 1;
			counter++;
			i++;
		}
		if (flag == 1)
			break ;
		i++;
	}
	s = malloc(sizeof(char) * (counter + 1));
	if (s == NULL)
		return (NULL);
	flag = 0;
	copy_characters(s, str, i, counter);
	s[counter] = '\0';
	return (s);
}

int	ft_strlen_mod(char const *str, char c, int i)
{
	int	len;
	int	flag;

	len = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			flag = 0;
			len++;
		}
		else if (flag == 0)
			break ;
		else
			len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		h;
	int		len;
	int		counter;
	char	**str;

	counter = ft_word_amount_checker(s, c);
	str = malloc(sizeof(char *) * (counter + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	h = 0;
	while (i < counter)
	{
		len = ft_strlen_mod(s, c, h);
		str[i] = ft_word_length_checker(s, c, h, 0);
		h = h + len + 1;
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	char	**str;

	if (argc == 3)
	{
		str = ft_split(argv[1], argv[2][0]);
		i = 0;
		while (str[i])
		{
			printf("Word %d: %s\n", i + 1, str[i]);
			i++;
		}
	}
	return (0);
}
*/
