/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:31:22 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/02 19:27:01 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len1;
	size_t		len2;
	char		*str;
	size_t		a;

	a = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == 0)
		return (NULL);
	while (a < len1)
	{
		str[a] = s1[a];
		a++;
	}
	a = 0;
	while (a < len2)
	{
		str[len1] = s2[a];
		a++;
		len1++;
	}
	str[len1] = '\0';
	return (str);
}
