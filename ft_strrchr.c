/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 02:20:54 by upolat            #+#    #+#             */
/*   Updated: 2024/04/16 16:06:52 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	temp;
	int	i;

	temp = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			temp = i;
		i++;
	}
	if (temp == 0 && str[0] != c)
		return (0);
	return ((char *)&str[temp]);
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
