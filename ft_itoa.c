/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:52:25 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/20 09:03:30 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(long int n)
{
	int	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		length++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			l;
	long int	nbr;

	nbr = (long)n;
	l = ft_length(nbr);
	result = malloc(sizeof(char) * l + 1);
	if (!result)
		return (NULL);
	if (nbr == 0)
		result[0] = '0';
	if (nbr < 0)
	{
		nbr = -nbr;
		result[0] = '-';
	}
	result[l--] = '\0';
	while (nbr > 0)
	{
		result[l] = (nbr % 10) + '0';
		nbr = nbr / 10;
		l--;
	}
	return (result);
}
