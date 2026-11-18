/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:11:01 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/09 10:27:54 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *calloc(size_t n, size_t size)
{
	size_t i;
	unsigned char *str;

	i = 0;
	while(i < n)
	{
		str[i] = 0;
		i++;
	}
	str = malloc(n * size);
	if (!str)
		return(NULL);
	return((unsigned char)str[i]);
}
