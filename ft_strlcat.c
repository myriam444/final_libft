/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:56:39 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/12 13:39:42 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

size_t strlcat (char *dest, const char *src, size_t size)
{
	size_t length;
	size_t i;
	size_t j;
	
	if (size == 0)
		return(0);
	length = (ft_strlen(dest) + ft_strlen(src));
	if (length > size)
		return(length);
	i = 0;
	while(dest[i] && i < size - 1)
		i++;
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i + j < size)
	      dest[i + j] = '\0';	
	return(length);
}
