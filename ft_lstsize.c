/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaric <pgaric@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:58:55 by pgaric            #+#    #+#             */
/*   Updated: 2022/05/17 09:33:08 by pgaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}	
	return (i);
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
	
	printf ("lenght : %d\n", ft_lstsize(lst1));
	return 0;
} */
