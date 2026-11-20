/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:44:15 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/20 09:47:56 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*d;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	d = malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len)
	{
		d[j] = s[i];
		i++;
		j++;
	}
	d[j] = '\0';
	return (d);
}
