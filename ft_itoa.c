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

static int	ft_length(int n)
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
	char	*result;
	int		l;

	l = ft_length(n);
	result = malloc(sizeof(char) * ft_length(n));
	if (!result)
		return (NULL);
	result[l--] = '\0';
	if (n < 0)
	{
		n = -n;
		result[0] = '-';
	}
	if (n == 0)
		result[0] = '0';
	while (n > 0)
	{
		result[l] = (n % 10) + '0';
		n = n / 10;
		l--;
	}
	return (result);
}
