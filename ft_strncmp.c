/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:54:40 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/12 13:40:55 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int strncmp(const char *str1, const char *str2, size_t length)
{
	size_t i;
	
	if (!s1 || !s2)
		return(0);
	if (n == 0)
		return(0);
	i = 0;
	while(s1[i] && s2[i] && i < n  && s1[i] == s2[i])
		i++;
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}
