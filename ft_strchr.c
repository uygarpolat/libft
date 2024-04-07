/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 02:00:24 by upolat            #+#    #+#             */
/*   Updated: 2024/04/08 02:20:17 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("%s-%s\n", strchr("abcdefgcdef", 'c'), ft_strchr("abcdefgcdef", 'c'));
	return (0);
}
*/
