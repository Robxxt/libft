/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:34:40 by rdragan           #+#    #+#             */
/*   Updated: 2023/09/16 13:37:51 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_print(t_list *root)
{
	t_list	*tmp;

	if (!root)
		return ;
	tmp = root;
	while (tmp)
	{
		ft_printf(1, "{%s} -> ", tmp->content);
		tmp = tmp->next;
	}
}
