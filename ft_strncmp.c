/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:54:40 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/20 09:58:25 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t length)
{
	size_t	i;

	if (!str1 || !str2)
		return (0);
	if (length == 0)
		return (0);
	i = 0;
	while (i < length && (str1[i] || str2[i]))
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return (((unsigned char)str1[i] - (unsigned char)str2[i]));
		i++;
	}
	return (0);
}
