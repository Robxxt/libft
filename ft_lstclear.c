/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 10:47:53 by rdragan           #+#    #+#             */
/*   Updated: 2022/11/09 15:07:16 by rdragan          ###   ########.fr       */
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
	t_list	*temp1;
	t_list	*temp2;

	if (!lst || !(*lst))
		return ;
	temp1 = *lst;
	while (temp1)
	{
		temp2 = temp1->next;
		ft_lstdelone(temp1, del);
		temp1 = temp2;
	}
	*lst = NULL;
}
