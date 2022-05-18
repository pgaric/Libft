/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaric <pgaric@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:39:21 by pgaric            #+#    #+#             */
/*   Updated: 2022/04/26 15:39:21 by pgaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	total;
	char	*memry;

	total = nmemb * size;
	memry = (char *)malloc(total);
	if (memry == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		memry[i] = 0;
		i++;
	}
	return ((void *)memry);
}
