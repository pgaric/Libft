/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaric <pgaric@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:28:49 by pgaric            #+#    #+#             */
/*   Updated: 2022/04/29 12:28:49 by pgaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))

{
	unsigned int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, (s + i));
			i++;
		}
	}
}
