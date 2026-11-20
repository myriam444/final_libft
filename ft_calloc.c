/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:11:01 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/20 09:54:15 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	dest = malloc(size * nmemb);
	if (!dest)
		return (NULL);
	ft_bzero(dest, nmemb * size);
	return (dest);
}
