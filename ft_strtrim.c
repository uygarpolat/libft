/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 02:26:22 by upolat            #+#    #+#             */
/*   Updated: 2024/04/11 02:17:01 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *str, int c);

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen((char *) s1);
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	return ((char *) ft_substr(s1, 0, len));
}

int	main(int argc, char**argv)
{
	if (argc == 3)
		printf("%s\n", ft_strtrim(argv[1], argv[2]));
	return (0);
}
