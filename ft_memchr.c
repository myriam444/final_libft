/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:33:46 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/12 13:34:08 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

void *memchr(const void *memoryBlock, int c, size_t size)
{
	size_t i;

	i = 0;
	if(!memoryBlock)
		return(NULL);
	if(size == 0)
		return(NULL);
	while (i < size)
	{
		if((const unsigned char)memoryBlock[i] == (unsigned char)c)
			return((void)&memoryBlock[i]);
		i++;
	}
	return(NULL);
}
