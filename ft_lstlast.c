/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaric <pgaric@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:57:39 by pgaric            #+#    #+#             */
/*   Updated: 2022/05/17 15:58:11 by pgaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}	
	return (lst);
}

/* int main ()
{
	char s1[]="ABCDE";
	char s2[]="ABCD";
	char s3[]="ABC";
	char s4[]="AB";
	char s5[]="A";

	t_list *lst1; //
	t_list *lst2; //
	t_list *lst3; // 
	t_list *lst4; //
	t_list *lst5; // these pointers are created so we create new nodes

	lst1 = ft_lstnew(s1); //
	lst2 = ft_lstnew(s2); //
	lst3 = ft_lstnew(s3); //
	lst4 = ft_lstnew(s4); //
	lst5 = ft_lstnew(s5); // this one is creating new nodes with information
	
	lst1->next = lst2;	//
	lst2->next = lst3;	//
	lst3->next = lst4;	//
	lst4->next = lst5; 	// this is connecting the nodes into one list
	
	
	printf ("last : %s\n", (char *)ft_lstlast(lst1)->content);
	printf ("lenght : %d\n", ft_lstsize(lst1));
	int i = 1;
	while (lst1 != NULL)
	{
		printf ("node:%d: content : %s\n",i, (char *)lst1->content);
		lst1 = lst1->next;
		i++;
	}
	return 0;
} */