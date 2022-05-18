/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaric <pgaric@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:58:31 by pgaric            #+#    #+#             */
/*   Updated: 2022/05/18 14:17:32 by pgaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnod;

	newnod = NULL;
	newnod = (t_list *)malloc(sizeof(t_list));
	if (newnod == NULL)
		return (newnod = NULL);
	newnod->next = NULL;
	newnod->content = content;
	return (newnod);
}
