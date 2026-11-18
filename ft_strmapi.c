/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:10:00 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/18 13:26:46 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	unsigned int	i;

	dest = malloc((sizeof(char) * ft_strlen(s)) + 1);
	if(!dest)
		return(NULL);
	i = 0;
	while(s[i])
	{
		dest[i] = (*f)(i, s[i]);
		i++;
	}
	return(dest);
}

