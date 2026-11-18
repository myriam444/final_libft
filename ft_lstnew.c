/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:54:37 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/17 20:54:45 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_mode;

	if(!content)
		return(NULL);
	new_node = malloc(sizeof)(t_list);
	if(!new_node)
		return(NULL);
	new_node->content = content;
	new_node->next = NULL;
	return(new_node);
}
