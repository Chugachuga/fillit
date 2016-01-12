/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:41:53 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/04 18:51:41 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			a;
	unsigned char	c1;
	unsigned char	*dst1;
	unsigned char	*src1;

	a = 0;
	c1 = (unsigned char)c;
	dst1 = (unsigned char*)dst;
	src1 = (unsigned char*)src;
	while (a < n)
	{
		if ((*dst1++ = *src1++) == c1)
			return (dst1);
		a++;
	}
	return (NULL);
}
