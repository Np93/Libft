/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhirzel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:04:11 by nhirzel           #+#    #+#             */
/*   Updated: 2021/10/21 19:41:59 by nhirzel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	long_mem;
	void	*resul;

	long_mem = count * size;
	resul = malloc(long_mem);
	if (resul == NULL)
		return (0);
	ft_bzero(resul, long_mem);
	return (resul);
}
