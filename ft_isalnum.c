/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 20:06:05 by upolat            #+#    #+#             */
/*   Updated: 2024/04/17 10:13:01 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d-%d\n", isalnum('A'), ft_isalnum('A'));
	printf("%d-%d\n", isalnum('Z'), ft_isalnum('Z'));
	printf("%d-%d\n", isalnum('a'), ft_isalnum('a'));
	printf("%d-%d\n", isalnum('z'), ft_isalnum('z'));
	printf("%d-%d\n", isalnum('0'), ft_isalnum('0'));
	printf("%d-%d\n", isalnum('9'), ft_isalnum('9'));
	printf("%d-%d\n", isalnum('M'), ft_isalnum('M'));
	printf("%d-%d\n", isalnum('m'), ft_isalnum('m'));
	printf("%d-%d\n", isalnum('&'), ft_isalnum('&'));
	printf("%d-%d\n", isalnum('\n'), ft_isalnum('\n'));
	return (0);
}
*/
