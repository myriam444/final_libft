/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:28:15 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/09 10:35:44 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strdup(const char *str)
{
	int i;
	int length;
	const char *dest;

	i = 0;
	length = ft_strlen(str);
	dest = malloc((length * sizeof(const char)) + 1);
	if (!dest)
		return(NULL);
	while(str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return(&dest[i]);
}
	
