/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:08:40 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/17 21:40:32 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	length;
	char const	*dest;

	i = 0;
	length = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(sizeof(char) * length + 1);
	if (!dest)
		return(NULL);
	j = 0;
	while(s1[i])
	{
		dest[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while(s2[i])
	{
		dest[j] = s2[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return(dest);

}
