/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhirzel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:04:05 by nhirzel           #+#    #+#             */
/*   Updated: 2021/10/25 21:38:21 by nhirzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	is1;
	size_t	is2;
	char	*s3;

	if (s1 == NULL || s2 == NULL)
		return (0);
	is1 = ft_strlen(s1);
	is2 = ft_strlen(s2);
	s3 = malloc(is1 + is2 + 1 * sizeof(char));
	if (s3 == NULL)
		return (0);
	is1 = 0;
	while (s1[is1] != '\0')
	{
		s3[+is1] = s1[+is1];
		is1++;
	}
	is2 = 0;
	while (s2[is2] != '\0')
		s3[is1++] = s2[is2++];
	s3[is1] = '\0';
	return (s3);
}
