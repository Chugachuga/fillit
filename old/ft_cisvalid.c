/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cisvalid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 15:06:51 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/05 16:46:53 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	ft_cisvalid(char **tab)
{
	int a;
	int b;
	int count_dot;
	int count_htag;

	a = 0;
	b = 0;
	count_dot = 0;
	count_htag = 0;
	while (a < 4)
	{
		while (b < 4)
		{
			if (tab[a][b] == '.')
				count_dot++;
			if (tab[a][b] == '#')
				count_htag++;
			b++;
		}
		b = 0;
		a++;
	}
	if (count_dot != 12 || count_htag != 4)
		return (0);
	return (1);
}
