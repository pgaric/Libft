/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaric <pgaric@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 11:32:11 by pgaric            #+#    #+#             */
/*   Updated: 2022/04/29 11:32:11 by pgaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(ft_strlen(string) + 1);
	if (dest == NULL)
		return (NULL);
	while (string[i] != '\0')
	{
		dest[i] = string[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
