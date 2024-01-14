/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhirzel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:04:52 by nhirzel           #+#    #+#             */
/*   Updated: 2021/10/27 21:49:59 by nhirzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	ii;
	char			*ss;
	unsigned int	si;

	ii = 0;
	i = start;
	if (s == NULL)
		return (0);
	si = ft_strlen(s);
	if (si < start)
		len = 0;
	if (si - start < len)
		ss = malloc(si - start + 1 * sizeof(char));
	else
		ss = malloc((len + 1) * sizeof(char));
	if (ss == NULL)
		return (0);
	while (s[i] != '\0' && i < len + start && start < si)
		ss[ii++] = s[i++];
	ss[ii] = '\0';
	return (ss);
}
