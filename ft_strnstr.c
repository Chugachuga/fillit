/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:35:19 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/14 19:45:58 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	a;
	size_t	b;
	size_t	c;

	a = 0;
	b = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (s1[a] != '\0' && n > 0)
	{
		b = a;
		c = 0;
		while (s1[b] == s2[c])
		{
			b++;
			c++;
			if (s2[c] == '\0' && b <= n)
				return ((char*)(&s1[a]));
		}
		a++;
	}
	return (NULL);
}
