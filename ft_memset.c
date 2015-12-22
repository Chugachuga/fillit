/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:59:11 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/02 18:24:07 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			a;
	unsigned char	*str;

	a = 0;
	str = (unsigned char *)b;
	if (len == 0)
		return (b);
	while (a < len)
	{
		str[a] = (unsigned char)c;
		a++;
	}
	return (b);
}
