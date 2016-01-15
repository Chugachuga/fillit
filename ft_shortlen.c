/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shortlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/15 00:49:58 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/15 01:12:27 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_shortlinelen(char **tab, int x)
{
	int b;
	int y;

	b = 0;
	y = 16;
	while (y != 0)
	{
		if (ft_isalpha(tab[x][y]) == 1)
			return (b);
		b++;
		y--;
	}
	return (b);
}

int	ft_xshortlen(char **tab)
{
	int x;
	int a;
	int b;

	x = 0;
	a = 0;
	b = 0;
	while (tab[x])
	{
		a = ft_shortlinelen(tab, x);
		if (a > b)
			b = a;
		x++;
	}
	return (17 - b);
}

int	ft_shortcolumnlen(char **tab, int y)
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

int	ft_yshortlen(char **tab)
{
	int y;
	int a;
	int b;

	y = 0;
	a = 0;
	b = 0;
	while (y < 16)
	{
		a = ft_shortcolumnlen(tab, y);
		if (a > b)
			b = a;
		y++;
	}
	return (16 - b);
}

int	ft_shortlen(char **tab)
{
	if (ft_yshortlen(tab) > ft_xshortlen(tab))
		return (ft_xshortlen(tab));
	else
		return (ft_yshortlen(tab));
}
