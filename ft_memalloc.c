/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 13:05:19 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/02 13:24:09 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*str;
	size_t			a;

	a = 0;
	str = NULL;
	if (size <= 0)
		return (NULL);
	str = (unsigned char*)malloc(size);
	if (str)
	{
		while (str && a < size)
		{
			str[a] = 0;
			a++;
		}
	}
	return ((void*)str);
}
