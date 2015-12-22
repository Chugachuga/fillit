/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:21:29 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/14 19:45:31 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	ret;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	ret = dst_len + src_len;
	if (size < dst_len)
	{
		return (size + src_len);
	}
	if (ft_strlen(dst) < size)
	{
		while (dst_len < (size - 1))
		{
			dst[dst_len++] = src[i++];
		}
	}
	if (size > dst_len)
		dst[dst_len] = 0;
	return (ret);
}
