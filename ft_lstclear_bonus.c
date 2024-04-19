/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:25:51 by upolat            #+#    #+#             */
/*   Updated: 2024/04/19 15:25:55 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	**head;

	temp = *lst;
	head = lst;
	while (temp != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*head = NULL;
}
/*
static void	del(void* node)
{
	free(node);
}

#include <stdio.h>

int	main(void)
{
	t_list **mylist;
	t_list *mylist2 = ft_lstnew(ft_strdup("out of "));
	t_list *mylist3 = ft_lstnew(ft_strdup("context "));
	t_list *mylist4 = ft_lstnew(ft_strdup("quotes"));
	t_list *mylist5 = ft_lstnew(ft_strdup("mislead"));
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
	//ft_lstdelone((*mylist)->next, &del);
	ft_lstclear(mylist, &del);
	return (0);
}
*/
