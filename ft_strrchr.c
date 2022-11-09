/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:52:31 by rdragan           #+#    #+#             */
/*   Updated: 2022/11/09 14:45:22 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Locates the last occurence of c in s.
*/
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	if (s[0] == c)
		return ((char *)s);
	if (c % 256 == 0)
		return ((char *)s + ft_strlen(s));
	return (NULL);
}
