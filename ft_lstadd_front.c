/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:01:15 by upolat            #+#    #+#             */
/*   Updated: 2024/04/18 00:08:54 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list **mylist;
	t_list *mylist2 = ft_lstnew("context");
	t_list *mylist3 = ft_lstnew("out of ");
	mylist = &mylist2;
	ft_lstadd_front(mylist, mylist3);
	char *str = (char *) (*mylist)->content;
	char *str2 = (char *) (*mylist)->next->content;
	printf("%s", str);
	printf("%s\n", str2);
	return (0);
}
*/
