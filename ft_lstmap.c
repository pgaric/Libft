/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaric <pgaric@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:58:12 by pgaric            #+#    #+#             */
/*   Updated: 2022/05/17 15:53:22 by pgaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;

	if (lst == NULL)
		return (NULL);
	newlst = NULL;
	while (lst != NULL)
	{
		newnode = ft_lstnew((*f)(lst->content));
		if (newnode == NULL)
		{
			while (newlst != NULL)
			{
				newnode = newlst->next;
				(*del)(newlst->content);
				free(newlst);
				newlst = newnode;
			}
			newlst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnode);
		lst = lst->next;
	}
	return (newlst);
}
