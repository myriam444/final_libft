/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:36:43 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/03 12:52:21 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}
size_t strlcpy(char *dest, const char *src, size_t size)
{
	int i;

	if(ft_strlen(src) >= size)
		return(NULL);
	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(ft_strlen(src))
}

