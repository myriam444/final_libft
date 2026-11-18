/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 21:08:37 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/17 21:11:08 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if(!lst || !new)
		return;
	if(*lst == NULL)
	{
		*lst = new;
		return;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}

