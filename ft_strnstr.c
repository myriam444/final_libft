/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:42:48 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/20 10:01:43 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t length)
{
	size_t	i;
	size_t	j;

	if (!*str2)
		return ((char *)str1);
	if (length == 0)
		return (NULL);
	i = 0;
	while (str1[i] && i < length)
	{
		j = 0;
		while (str1[i + j] == str2[j] && i + j < length)
		{
			if (str2[j + 1] == '\0')
				return ((char *)&str1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
