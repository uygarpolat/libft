/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:02:23 by upolat            #+#    #+#             */
/*   Updated: 2024/04/12 22:26:07 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
#include <unistd.h>

void	ft_write(unsigned int i, char *str)
{
	(void)i;
	write(1, str, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_striteri(argv[1], ft_write);
	}
	return (0);
}
*/
