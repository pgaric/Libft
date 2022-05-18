/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaric <pgaric@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:32:09 by pgaric            #+#    #+#             */
/*   Updated: 2022/04/29 12:32:09 by pgaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		k;
	int		len;

/* 	if (!s1 || !s2)
		return (NULL); */
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	dest = (char *)malloc(len);
	i = 0;
	if (dest == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		dest[i + k] = s2[k];
		k++;
	}
	dest[i + k] = '\0';
	return (dest);
}
