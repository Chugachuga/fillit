/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:07:55 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/04 20:12:14 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	a;
	char			*str;

	str = (char*)malloc(sizeof(char) * (len + 1));
	a = 0;
	if (str == 0)
		return (NULL);
	while (a < len)
	{
		str[a] = s[start];
		a++;
		start++;
	}
	str[a] = '\0';
	return (str);
}
