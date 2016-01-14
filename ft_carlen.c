/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_carlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 19:16:11 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/14 18:40:47 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_linelen(char **tab, int x)
{
	int b;
	int y;

	b = 0;
	y = ft_strlen(tab[x]);
	while (y != 0)
	{
		if (ft_isalpha(tab[x][y]) == 1)
			return (b);
		b++;
		y--;
	}
	return (b);
}

int	ft_xlen(char **tab)
{
	int x;
	int a;
	int b;

	x = 0;
	a = 0;
	b = 16;
	while (tab[x])
	{
		a = ft_linelen(tab, x);
		if (a < b)
			b = a;
		x++;
	}
	return (16 - b);
}

int ft_columnlen(char **tab, int y)
{
	int b;
	int x;

	b = 0;
	x = 15;
	while (x != 0)
	{
		if (ft_isalpha(tab[x][y]) == 1)
			return (b);
		b++;
		x--;
	}
	return (b);
}

int	ft_ylen(char **tab)
{
	int y;
	int a;
	int b;

	y = 0;
	a = 0;
	b = 16;
	while (y < 16)
	{
		a = ft_columnlen(tab, y);
		if (a < b)
			b = a;
		y++;
	}
	return (16 - b);
}

int	ft_carlen(char **tab)
{
	if (ft_ylen(tab) < ft_xlen(tab))
		return (ft_xlen(tab));
	else
		return (ft_ylen(tab));
}
