/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhirzel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:10:57 by nhirzel           #+#    #+#             */
/*   Updated: 2021/10/27 21:48:03 by nhirzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	trie(char const *set, char s1)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		ii;
	int		si;
	char	*ss;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (0);
	ii = ft_strlen(s1);
	while (trie(set, s1[i]) && s1[i])
		i++;
	while (trie(set, s1[ii - 1]) && i != ii)
		ii--;
	ss = malloc((ii - i + 1) * sizeof(char));
	if (ss == NULL)
		return (0);
	si = 0;
	while (i < ii)
		ss[si++] = s1[i++];
	ss[si] = '\0';
	return (ss);
}
