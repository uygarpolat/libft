/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 23:04:19 by upolat            #+#    #+#             */
/*   Updated: 2024/04/08 01:33:14 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n')
			i++;
		else
			break ;
	}
	if (str[i] == '-')
		sign = -sign;
	i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (sign * nbr);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	printf("%d|%d\n", atoi("\r\n\t\b\f\v\a-42"), ft_atoi("\r\n\t\b\f\v\a-42"));
	return (0);
}
*/
