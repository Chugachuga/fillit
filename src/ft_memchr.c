/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 23:01:56 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/04 16:43:21 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*s1;
	unsigned char	c1;

	a = 0;
	s1 = (unsigned char*)s;
	c1 = (unsigned char)c;
	while (a < n)
	{
		if (s1[a] == c1)
		{
			return ((void*)(s1 + a));
		}
		a++;
	}
	return (NULL);
}
