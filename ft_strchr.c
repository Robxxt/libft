/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:27:51 by rdragan           #+#    #+#             */
/*   Updated: 2022/11/09 13:00:52 by rdragan          ###   ########.fr       */
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
	if (!s || c % 255 == 0)
		return (NULL);
	if (c == '\0' || !ft_isascii(c))
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
