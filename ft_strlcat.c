/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgaric <pgaric@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:56:48 by pgaric            #+#    #+#             */
/*   Updated: 2022/04/29 13:56:48 by pgaric           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			k;
	size_t			dst_len;
	size_t			src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	k = dst_len;
	i = 0;
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	while (src[i] != '\0' && k < dstsize - 1)
	{
		dst[k] = src[i];
		i++;
		k++;
	}
	dst[k] = '\0';
	return (src_len + dst_len);
}
