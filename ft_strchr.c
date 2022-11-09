/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:27:51 by rdragan           #+#    #+#             */
/*   Updated: 2022/11/09 14:33:24 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Returns the address of the first occurence of c in s.
If c is '\0' then locates it's address in s.
If not found, returns NULL.
To pevent overflow I make sure that is not divisible by 255.
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = -1;
	while (s[++i])
	{
		if (s[i] == c)
			return ((char *)s + i);
	}
	if (s[i] == c || c % 256 == 0)
		return ((char *)s + i);
	return (NULL);
}
