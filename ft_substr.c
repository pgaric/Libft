/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaric <pgaric@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:22:40 by pgaric            #+#    #+#             */
/*   Updated: 2022/05/02 11:22:40 by pgaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (ft_strlen(s) < start)
	{
		substr = (char *)malloc(sizeof(char));
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	else
	{
		if (ft_strlen(s) < start + len)
			len = ft_strlen(s) - start;
	substr = (char *)malloc(len + 1);
		if (substr == NULL)
			return (NULL);
	i = -1;
		while (++i < len)
			substr[i] = s[start + i];
	substr[i] = '\0';
		return (substr);
	}
}
