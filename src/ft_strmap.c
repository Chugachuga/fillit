/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:40:12 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/02 16:49:00 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		a;
	char	*str;
	size_t	len;

	a = 0;
	len = ft_strlen(s);
	str = (char*)malloc(sizeof(*str) * len + 1);
	if (str == NULL)
		return (NULL);
	if (s && f)
	{
		while (s[a] != '\0')
		{
			str[a] = f(s[a]);
			a++;
		}
		str[a] = '\0';
		return (str);
	}
	return (NULL);
}
