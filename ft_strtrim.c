/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaric <pgaric@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:01:03 by pgaric            #+#    #+#             */
/*   Updated: 2022/05/02 11:01:03 by pgaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] != '\0' && (ft_strchr(set, s1[i])) != NULL)
		i++;
	j = ft_strlen(s1 + i);
	while (j != 0 && (ft_strchr(set, s1[j + i])) != NULL)
		j--;
	return (ft_substr(s1, i, j + 1));
}
