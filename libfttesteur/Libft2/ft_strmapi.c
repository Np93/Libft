/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhirzel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:47:49 by nhirzel           #+#    #+#             */
/*   Updated: 2021/10/25 15:28:08 by nhirzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int 	i;
	char			*new_s;

	i = 0;
	if (s == NULL)
		return (0);
	new_s = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (new_s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
