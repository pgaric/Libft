/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaric <pgaric@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:58:31 by pgaric            #+#    #+#             */
/*   Updated: 2022/05/17 16:57:19 by pgaric           ###   ########.fr       */
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

/* int main()
{
	char s[]="DADA";
	char d[]="LALA";

	t_list *new = NULL;
	t_list *sec = NULL;

	new = ft_lstnew(s);
	sec = ft_lstnew(d);
	printf("%s, %p, %p\n",(char *)new->content, new, new->next);
	printf("%s, %p, %p\n",(char *)sec->content, sec, sec->next);
	printf("size of the list: %d\n",ft_lstsize(new));
	new->next = sec;
	printf("%s, %p, %p\n",(char *)sec->content, sec, new->next);
	printf("size of the list: %d\n",ft_lstsize(new));
} */