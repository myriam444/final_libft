/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:11:01 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/20 09:54:15 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	i;
	void	*str;

	i = 0;
	if (size && n > SIZE_MAX / size)
		return (NULL)
	str = malloc(n * size);
	if (!str)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)str)[i] = 0;
		i++;
	}
	return (str);
}
