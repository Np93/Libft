/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhirzel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:13:46 by nhirzel           #+#    #+#             */
/*   Updated: 2021/10/29 16:21:59 by nhirzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int	i;
	int ii;
	int	t_i;
	char	**tab;

//	trouver le bon nombre de mot
	i = 0;
	ii = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] >= 0 && s[i + 1] <= 127) && s[i + 1] != '\0' && s[i + 1] != '\0')//espace //
			ii++;
		if (i == 0 && (s[i] >= 0 && s[i] <= 127))
			ii++;
		i++;
	}
	tab = malloc((ii + 1) *sizeof(char*));
	if (tab == NULL)
		return (0);
//	trouver le debut des mots
	i = 0;
	ii = 0;
	t_i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 0 && s[i] <= 127) && s[i] != c && s[i] != '\0')
		{
			ii = 0;
			while ((s[i + ii] >= 0 && s[i + ii] <= 127) && s[i + ii] != c && s[i + ii] != '\0')
			{
				if (s[i + ii] != c)
					tab[t_i] = ft_substr(s, i, (i + (ii + 1)));
				ii++;
			}
			t_i++;
		}
		i++;
	}
	return (tab);
}
