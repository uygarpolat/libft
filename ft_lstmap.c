/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upolat <upolat@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:53:53 by upolat            #+#    #+#             */
/*   Updated: 2024/04/18 19:12:42 by upolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*newlist;
	t_list	*temp;

	temp = lst;
	while (lst != NULL)
	{
		newlist = malloc(sizeof(t_list));
		if (newlist == NULL)
		{
			while (temp != NULL)
			{
				free(temp);
				temp = temp->next;
			}
			return (NULL);
		}
		newlist->content = (*f)(lst->content);
		lst = lst->next;
		newlist = newlist->next;
	}
	return(newlist);
}
