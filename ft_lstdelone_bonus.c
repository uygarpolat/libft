/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:25:33 by upolat            #+#    #+#             */
/*   Updated: 2024/04/19 15:25:39 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}

/*
static void	del(void* content)
{
	free(content);
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
	ft_lstdelone((*mylist)->next, &del);
	return (0);
}
*/
