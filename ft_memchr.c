/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:50:56 by rdragan           #+#    #+#             */
/*   Updated: 2022/11/04 16:55:47 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Locates the first occurence of c (converted to unsigned char) in s.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ls;
	size_t	i;

	ls = (char *)s;
	i = -1;
	while ((++i < n - 1) && ls[i])
	{
		if (ls[i] == c)
			return (ls + i);
	}
	if (c == '\0')
		return (ls + i);
	return (NULL);
}