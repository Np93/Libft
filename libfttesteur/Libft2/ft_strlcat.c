/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhirzel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:20:27 by nhirzel           #+#    #+#             */
/*   Updated: 2021/10/26 15:41:54 by nhirzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_i;
	size_t	src_i;
	size_t	dst_2;

	i = 0;
	dst_i = ft_strlen(dst);
	dst_2 = ft_strlen(dst);
	src_i = ft_strlen(src);
	if (dstsize <= dst_i)
		return (dstsize + src_i);
	while (src[i] != '\0' && dst_i + 1 < dstsize)
	{
		dst[dst_i] = src[i];
		i++;
		dst_i++;
	}
	dst[dst_i] = '\0';
	return (dst_2 + src_i);
}
