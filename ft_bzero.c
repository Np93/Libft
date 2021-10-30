/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhirzel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:14:14 by nhirzel           #+#    #+#             */
/*   Updated: 2021/10/20 15:37:52 by nhirzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	ss = (unsigned char *) s;
	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		ss[i] = '\0';
		i++;
	}
}
