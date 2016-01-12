/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putintab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:59:04 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/12 20:37:25 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_putintab(char **new, char *tab, int x, int y)
{
	int i;
	int a;
	int b;

	a = x;
	b = y;
	i = 0;
	while (tab[i] != '\0')
	{
		if (ft_isalpha(tab[i]) == 1)
			new[a][b] = tab[i];
		if (tab[i] == '\n')
		{
			a++;
			b = y - 1;
		}
		b++;
		i++;
	}
	return (new);
}

int main(int argc, char *argv[])
{
	char **tab;
	char **new;
	int a;
	int x;
	int y;
	int i;
	int j;

	a = 0;
	x = 0;
	y = 0;
	new = ft_initmap();
	tab = ft_intab(ft_change(ft_rapl_fonctions(ft_read_txt(argv[1]))));
	if (argc == 2)
	{
		ft_putintab(new, tab[0], x, y);
		ft_putintab(new, tab[1], 3, 1);
		ft_putintab(new, tab[2], 0, 1);
		ft_putintab(new, tab[3], 2, 0);
		ft_showtab(new);
		ft_carlen(new);
	}
	return (0);
}
