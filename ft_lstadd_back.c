/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaric <pgaric@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:54:33 by pgaric            #+#    #+#             */
/*   Updated: 2022/05/17 16:54:27 by pgaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
/* 		temp = ft_lstlast(*lst);
		temp->next = new; */
		temp = *lst;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
}
/* 
int main ()
{
	char s1[]="ABCDE";
	char s2[]="ABCD";
	char s3[]="ABC";
	char s4[]="AB";
	char s5[]="A";
	char newcont[]= "NEWADDED";

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

	ft_lstadd_back(&lst1,new);

	printf ("\ncontent in the list node |6|: %s\n", (char *)new->content);
	printf ("last content in the list: %s\n", (char *)ft_lstlast(lst1)->content);
	printf ("lenght of all list (nodes): %d\n\n", ft_lstsize(lst1));

	int i = 1;
	while (lst1 != NULL)
	{
		printf ("node:%d: content : %s\n",i, (char *)lst1->content);
		lst1 = lst1->next;
		i++;
	}
	
	return 0;
} */