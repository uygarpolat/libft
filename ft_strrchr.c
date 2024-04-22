/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 02:20:54 by upolat            #+#    #+#             */
/*   Updated: 2024/04/22 08:58:06 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char)c)
			return ((char *)&str[len]);
		len--;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("%s-%s\n", strrchr("abcdefgcdef", 'a'),
		ft_strrchr("abcdefgcdef", 'a'));
	return (0);
}
*/
