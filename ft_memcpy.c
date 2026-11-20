/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:07:07 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/20 09:40:23 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size
		&& ((unsigned char *)dest)[i] != ((unsigned char *)source)[i])
	{
		((unsigned char *)dest)[i] = ((unsigned char *)source)[i];
		i++;
	}
	return (dest);
}
