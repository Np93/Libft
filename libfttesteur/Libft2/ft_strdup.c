/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhirzel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:43:07 by nhirzel           #+#    #+#             */
/*   Updated: 2021/10/21 20:21:02 by nhirzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	l;
	char	*copie;

	i = 0;
	l = ft_strlen(s1) + 1;
	copie = (char *) malloc(l * sizeof(char));
	if (copie == NULL)
		return (0);
	while (i < l)
	{
		copie[i] = s1[i];
		i++;
	}
	return (copie);
}
