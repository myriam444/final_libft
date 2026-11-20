/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:35:30 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/20 10:00:18 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	if (!ptr1 || !ptr2)
		return (0);
	if (size == 0)
		return (0);
	p1 = (const unsigned char *)ptr1;
	p2 = (const unsigned char *)ptr2;
	i = 0;
	while (i < size - 1 && p1[i] == p2[i])
		i++;
	return ((int)(p1[i] - p2[i]));
}
