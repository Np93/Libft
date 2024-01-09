/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhirzel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:35:53 by nhirzel           #+#    #+#             */
/*   Updated: 2021/10/26 17:51:14 by nhirzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	a;

	a = len;
	i = 0;
	if (dst == 0 && src == 0)
		return (NULL);
	if (src > dst)
	{
		while (i < len)
		{
			((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
			i++;
		}
	}
	else //(dst < src)
	{	
		while (a)
		{
			((unsigned char *) dst)[a - 1] = ((unsigned char *) src)[a - 1];
			a--;
		}
	}
	return (dst);
}
