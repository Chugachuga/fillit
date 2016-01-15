/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 16:22:20 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/15 04:26:43 by gvilmont         ###   ########.fr       */
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
				while (ft_checkpos(new, tab[a], x, y) == 0)
				{
					x++;
					if (ft_checkpos(new, tab[a], x, y) == 0)
						y++;
				}
				ft_putintab(new, tab[a], x, y);
				if (tab[a][0] != '.')
				{
					if (ft_xshortlen(new) > ft_yshortlen(new))
					{
						y = ft_xshortlen(new);
						x = ft_yshortlen(new) - 1;
					}
					if (ft_ylen(new) > ft_xlen(new))
					{
						x = ft_xshortlen(new) - 1;
						y = ft_yshortlen(new);
					}
					if (ft_ylen(new) == ft_xlen(new))
					{
						x = ft_yshortlen(new) + 1;
						y = ft_yshortlen(new) - 1;
					}
				}
				ft_showtab(new);
				ft_putchar('\n');
				a++;
			}
		}
		else
			ft_putstr("error\n");
	}
	return (0);
}
