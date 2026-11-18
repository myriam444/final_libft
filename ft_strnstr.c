/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 13:42:48 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/12 13:43:07 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *str1, const char *str2, size_t length)
{
	size_t i;
	size_t j;
	size_t temp;

	if(!str1)
		return(NULL);
	if(!str2)
		return((char *)str1);
	if(length == 0)
		return(NULL);
	i = 0;
	while(str1[i] && i < length)
	{
		if (length - i >= ft_strlen(str2) && str1[i] == str2[0])
		{
			j = 0;
			while(str1[i + j] && str2[j] && str1[i + j] == str2[j] && (i + j) < length)
				j++;
			if (j == ft_strlen(str2))
				return((char *)&str1[temp]);
		}
	i++;
	}	
	return(NULL);
}

