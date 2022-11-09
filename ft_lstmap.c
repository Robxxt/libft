/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:16:28 by rdragan           #+#    #+#             */
/*   Updated: 2022/11/09 09:56:01 by rdragan          ###   ########.fr       */
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
	return (NULL);
}
