/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:52:25 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/18 13:24:59 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n)
{
	int	length;

	length = 0;
	if (n == 0)
		return(1);
	if(n < 0)
	{
		length++;
		n = -n;
	}
	while(n > 0)
	{
		n/= 10;
		length++;
	}
	return(length);
}

char	*ft_itoa(int n)
{
	char	*result;
	
	result = malloc(sizeof(char) * ft_length(n));
	if(!result)
		return(NULL);
	if(n < 0)
		n = -n;
	if(n <= 9)
		result = n + '0';
	while(n > 0)
	{
		result = (n / 10) + '0'; //a voir si je fais une recursive 
		result = (n % 10) + '0';

	}
	return(dest);
}
