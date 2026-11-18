/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:07:07 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/03 09:45:43 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *memcpy(void *dest, const void *source, sizet_t size)
{
	int i;

	i = 0;
	while(i < size && dest[i] != source[i])
	{
		dest[i] = source[i];
		i++;
	}
	return(dest);
}
