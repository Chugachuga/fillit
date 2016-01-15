/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 16:22:20 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/15 05:32:55 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char *argv[])
{
	char **tab;
	char **new;
	int a;
	int b;
	int x;
	int y;

	new = ft_initmap();
	tab = NULL;
	a = 0;
	b = 0;
	x = 0;
	y = 0;
	if (argc == 2)
	{
		if (ft_mapisvalid(ft_read_txt(argv[1])) == 1)
		{
			b = ft_count_tet(ft_change(ft_rapl_fonctions(ft_read_txt(argv[1]))));
			tab = ft_intab(ft_change(ft_rapl_fonctions(ft_read_txt(argv[1]))));
			while (a < b)
			{
				while (ft_checkpos(new, tab[a], x, y) == 0 && y < ft_carlen(new))
				{
					y++;
					if (ft_checkpos(new, tab[a], x, y) == 0 && y == b / 2)
					{
						x++;
						y = 0;
					}
				}
				if (ft_checkpos(new, tab[a], x , y) == 1)
					ft_putintab(new, tab[a], x, y);
				ft_showtab(new);
				ft_putchar('\n');
				a++;
				x = 0;
				y = 0;
			}
		}
		else
			ft_putstr("error\n");
	}
	return (0);
}
