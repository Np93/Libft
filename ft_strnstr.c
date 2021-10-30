/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhirzel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:14:33 by nhirzel           #+#    #+#             */
/*   Updated: 2021/10/20 15:31:30 by nhirzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	ii;

	i = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (i < len && haystack[i] != '\0')
	{
		ii = 0;
		while (haystack[i + ii] == needle[ii] && (i + ii) < len
			&& haystack[i + ii] && needle[ii])
			ii++;
		if (needle[ii] == '\0')
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}
