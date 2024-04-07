/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 22:27:48 by upolat            #+#    #+#             */
/*   Updated: 2024/04/07 22:46:57 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 1000)
	{
		if (isprint(i) != ft_isprint(i))
		{
			printf("ft_isprint doesn't work because of ASCII char #%d.\n", i);
			return (0);
		}
		i++;
	}
	printf("ft_isprint works!\n");
	return (0);
}
*/
