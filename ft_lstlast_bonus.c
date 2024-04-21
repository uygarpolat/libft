/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:24:42 by upolat            #+#    #+#             */
/*   Updated: 2024/04/21 13:24:34 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (temp == NULL)
		return (NULL);
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list **mylist;
	t_list *mylist2 = ft_lstnew("out of ");
	t_list *mylist3 = ft_lstnew("context ");
	t_list *mylist4 = ft_lstnew("quotes");
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
	return (0);
}
*/
