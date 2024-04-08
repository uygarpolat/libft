/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:40:41 by upolat            #+#    #+#             */
/*   Updated: 2024/04/08 13:59:25 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, int n)
{
	int	i;

	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] > str2[i])
			return (1);
		if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d|%d", strncmp("Why", "Not", 6), ft_strncmp("Why", "Not", 6));
	return (0);
}
*/
