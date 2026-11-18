/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:46:55 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/12 13:44:57 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *strrchr(const char *str, int c)
{
	int i;
	int size;

	if(!str)
		return(NULL);
	size = ft_strlen(str);
	i = size;
	while (i >= 0)
	{
		if(str[i] == (char)c)
			return((char *)&str[i]);
		i--;
	}
	return(NULL);
}
