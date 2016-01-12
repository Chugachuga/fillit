/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:42:55 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/10 17:23:01 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t a;

	a = 0;
	if (n == 0)
		return (1);
	if (s1 && s2)
	{
		while (a < n && (s1 != '\0' || s2 != '\0'))
		{
			if (s1[a] == s2[a])
				a++;
			else
				return (0);
		}
		return (1);
	}
	return (0);
}
