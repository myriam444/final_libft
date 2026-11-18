/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myrhamza <myrhamza@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 21:19:50 by myrhamza          #+#    #+#             */
/*   Updated: 2026/11/17 21:25:09 by myrhamza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;
	
	new_lst = NULL;3
	if(!lst || !f || !del)
		return(NULL);
	while(lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		
		if(!new_node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return(NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return(new_lst);
			
}
