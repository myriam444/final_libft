/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:23:38 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/18 13:22:15 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	while(s[i])
	{
		if(s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return(count);
}

static char	*copie_word(const char *str, char c)
{
	int	i;
	int	len;
	int	*words;

	i = 0;
	len = 0;
	while(str[len] && str[len] != c)
		len++;
	words = malloc(sizeof(char) * (len + 1));
	if(!words)
		return(NULL);
	while(i < len)
	{
		words[i] = str[i];
		i++;
	}
	words[i] = '\0';
	return(words);
}
}
char	**ft_split(char const *s, char c)
{
	int	i;
	char	k;
	int	**tab;
	
	if(!s)
		return(NULL);
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if(!tab)
		return(NULL);
	i = 0;
	k = 0;
	while(s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break;
		tab[k] = copie_word(&s[i], c);
		if(!tab[k])
		{
			while(k > 0)
			{
				k--;
				free(tab[k]);
			}
			free(tab);
			return(NULL);
		}
		k++;
		while(s[i] && s[i] != c)
			i++;
	}
	tab[k] = NULL;
	return(tab);

	
		
}
