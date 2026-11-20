/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:36:29 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/20 09:51:24 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	size;

	i = 0;
	if (!str)
		return (NULL);
	size = ft_strlen(str);
	while (i <= size)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
