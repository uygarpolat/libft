/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:05:28 by upolat            #+#    #+#             */
/*   Updated: 2024/04/10 01:48:51 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *destination, char *source, unsigned int size)
{
	unsigned int	i;
	unsigned int	counter;

	counter = 0;
	while (source[counter])
		counter++;
	i = 0;
	while (source[i] != '\0' && i + 1 < size)
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (counter);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char			source1[6] = "Hello";
	char			dest1[6];
	unsigned int	len1;
	char			source2[6] = "Hello";
	char			dest2[6];
	unsigned int	len2;
	unsigned int	size1;
	unsigned int	size2;

	size1 = 6;
	size2 = 6;
	len1 = strlcpy(dest1, source1, size1);
	len2 = ft_strlcpy(dest2, source2, size2);
	printf("for    strlcpy, dest is %s and return value is %d\n", dest1, len1);
	printf("for ft_strlcpy, dest is %s and return value is %d\n", dest2, len2);
}
*/
