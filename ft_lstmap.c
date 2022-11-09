/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:16:28 by rdragan           #+#    #+#             */
/*   Updated: 2022/11/06 19:00:28 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Iterates the list lst and applies the fuction f on the content of each node.
Creates a list resulting onn the sccessive applicateion of f. The del
is used to delete the content of a node if needed.
@param lst: address of the first list node.
@param f: address of the function used to iterate on the list.
@param del: address of the function used to delete the content of a node.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	temp = lst;
	new_lst = ft_lstnew(f(temp->content));
	if (!new_lst)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	temp = temp->next;
	while (temp)
	{
		new_node = f(temp->content);
		if (!new_node)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new_lst, del);
			break ;
		}
		temp = temp->next;
		ft_lstadd_back(&new_lst, new_node);
	}
	return (new_lst);
}
