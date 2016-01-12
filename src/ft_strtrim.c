/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:50:43 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/09 16:08:58 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_strtrimlen(char *s1)
{
	size_t	a;
	size_t	space;
	size_t	len;

	a = 0;
	len = ft_strlen(s1);
	space = 0;
	while (s1[a] == ' ' || s1[a] == '\n' || s1[a] == '\t')
		a++;
	space = a;
	if (s1[a] != '\0')
	{
		a = len - 1;
		while (s1[a] == ' ' || s1[a] == '\n'
					|| s1[a] == '\t')
		{
			a--;
			space++;
		}
	}
	return (len - space);
}

char			*ft_strtrim(char const *s)
{
	size_t	a;
	size_t	b;
	char	*s1;
	size_t	len;

	a = 0;
	b = 0;
	len = ft_strtrimlen((char *)s);
	s1 = (char *)malloc(sizeof(char) * (len + 1));
	if (s1 == NULL)
		return (NULL);
	while (s[a] == ' ' || s[a] == '\t' || s[a] == '\n')
		a++;
	while (b < len)
	{
		s1[b] = s[a];
		a++;
		b++;
	}
	s1[b] = '\0';
	return (s1);
}
