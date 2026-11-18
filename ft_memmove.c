/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:36:48 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/12 13:37:10 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *memmove(void *dest, const void *src, size_t size)
{
	size_t i;

	if(!dest && !src)
		return(NULL);
	if ((size_t)dest > ((size_t)src))
	{
		i = size - 1;
		while(i > 0)
		{
			((unsigned char)*dest)[i] = ((unsigned char)*src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < size)
		{
			((unsigned char)*dest)[i] = ((unsigned char)*src)[i];
			i++;
		}
	}
	return(dest);
}
