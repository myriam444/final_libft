/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 08:17:47 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/03 08:35:43 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *memset(void *ptr, int value, size_t count)
{
	int i;

	i = 0;
	while(i < count)
	{
		ptr[i] = value;
		i++;
	}
	return(ptr);
}
