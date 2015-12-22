/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:13:59 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/14 15:36:01 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			len;

	len = ft_strlen(s);
	if (c == 0)
		return ((char *)&s[len]);
	while (s[len] != (char)c && len != 0)
	{
		len--;
		if (s[len] == (char)c)
			return ((char *)&s[len]);
	}
	return (NULL);
}
