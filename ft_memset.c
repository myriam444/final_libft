/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 08:17:47 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/20 09:18:30 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		((unsigned char *)ptr)[i] = value;
		i++;
	}
	return (ptr);
}
