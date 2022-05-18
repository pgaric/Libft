/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaric <pgaric@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:55:38 by pgaric            #+#    #+#             */
/*   Updated: 2022/05/17 16:04:24 by pgaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL)
	{
		*lst = new;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

/* int main ()
{
	char s1[]="ABCDE";
	char s2[]="ABCD";
	char s3[]="ABC";
	char s4[]="AB";
	char s5[]="A";
	char newcont[]= "NEW";

	t_list *new;
	t_list *lst1; //
	t_list *lst2; //
	t_list *lst3; // 
	t_list *lst4; //
	t_list *lst5; // these pointers are created so we create new nodes

	new = ft_lstnew(newcont);
	lst1 = ft_lstnew(s1); //
	lst2 = ft_lstnew(s2); //
	lst3 = ft_lstnew(s3); //
	lst4 = ft_lstnew(s4); //
	lst5 = ft_lstnew(s5); // this one is creating new nodes with information
	
	lst1->next = lst2;	//
	lst2->next = lst3;	//
	lst3->next = lst4;	//
	lst4->next = lst5; 	// this is connecting the nodes into one list
	
	
	printf ("content in the list node |2|: %s\n", (char *)lst2->content);
	printf ("last content in the list: %s\n", (char *)ft_lstlast(lst3)->content);
	printf ("lenght of all list (nodes): %d\n\n", ft_lstsize(lst1));

	ft_lstadd_front(&lst1,new);

	printf ("\ncontent in the list node |1|: %s\n", (char *)new->content);
	printf ("last content in the list: %s\n", (char *)ft_lstlast(new)->content);
	printf ("lenght of all list (nodes): %d\n\n", ft_lstsize(lst1));

	int i = 1;
	while (new != NULL)
	{
		printf ("node:%d: content : %s\n",i, (char *)new->content);
		new = new->next;
		i++;
	}
	printf ("\nnew: %s\n", (char *)new->content);
	return 0;
} */