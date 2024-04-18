/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 00:11:41 by upolat            #+#    #+#             */
/*   Updated: 2024/04/18 10:09:35 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list **mylist;
	t_list *mylist2 = ft_lstnew("out of ");
	t_list *mylist3 = ft_lstnew("context ");
	t_list *mylist4 = ft_lstnew("quotes");
	t_list *mylist5 = ft_lstnew("mislead");
	mylist = &mylist4;
	ft_lstadd_front(mylist, mylist3);
	ft_lstadd_front(mylist, mylist2);
	char *str = (char *) (*mylist)->content;
	char *str2 = (char *) (*mylist)->next->content;
	char *str3 = (char *) (*mylist)->next->next->content;
	printf("%s", str);
	printf("%s", str2);
	printf("%s\n", str3);
	(*mylist)->next->next->next = NULL;
	printf("Size of list is: %d\n", ft_lstsize(*mylist));
	printf("Last element's content is: quotes\n       ft_lstlast
		returns: %s\n", (char *) ft_lstlast(*mylist)->content);
	ft_lstadd_back(mylist, mylist5);
	char *str4 = (char *) (*mylist)->next->next->next->content;
	printf("%s\n", str4);
	return (0);
}
*/
