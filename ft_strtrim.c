/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:56:14 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/20 09:26:04 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset_start(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
			j++;
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (i);
}

static int	ft_isset_end(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
			j++;
		if (set[j] == '\0')
			break ;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		start;
	int		end;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	start = ft_isset_start(s1, set);
	end = ft_isset_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	dest = malloc(sizeof(const char) * (end - start + 2));
	if (!dest)
		return (NULL);
	i = start;
	j = 0;
	while (i <= end)
	{
		dest[j] = s1[i];
		start++;
		j++;
	}
	return (dest);
}
