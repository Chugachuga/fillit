/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:31:39 by gvilmont          #+#    #+#             */
/*   Updated: 2015/11/25 11:55:49 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *source)
{
	int a;

	a = 0;
	while (source[a] != '\0')
	{
		dest[a] = source[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
