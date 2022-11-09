/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:47:53 by rdragan           #+#    #+#             */
/*   Updated: 2022/11/06 10:53:08 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Deletes and frees the given node and every successor of that node,
using the function del and free. Finally the pointer to the
list must be set NULL.
@param lst: address of the list
@param del: address of the function used to delete the content
			of the node
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !(*lst))
		return ;
	temp = *lst;
	while (temp)
	{
		ft_lstdelone(temp, del);
		temp = temp->next;
	}
	*lst = NULL;
}
