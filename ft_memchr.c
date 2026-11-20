/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:33:46 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/20 09:53:18 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int c, size_t size)
{
	size_t	i;

	i = 0;
	if (!memoryBlock)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		if (((unsigned char *)memoryBlock)[i] == (unsigned char)c)
			return (&((char *)memoryBlock)[i]);
		i++;
	}
	return (NULL);
}
