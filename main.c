/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 16:22:20 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/20 16:51:41 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char *argv[])
{
	char	**tab;
	char	**new;
	int		a;
	int		b;
	int		x;
	int		y;

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
				if (ft_xlen(new) < ft_ylen(new) || ft_xlen(new) == ft_ylen(new))
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
				}
				if (ft_xlen(new) > ft_ylen(new))
				{
					while (ft_checkpos(new, tab[a], x ,y) == 0 && x < ft_carlen(new))
					{
						x++;
						if (ft_checkpos(new, tab[a], x ,y) == 0 && x == b / 2)
						{
							y++;
							x = 0;
						}
					}
				}
				if (ft_checkpos(new, tab[a], x , y) == 1)
					ft_putintab(new, tab[a], x, y);
				a++;
				x = 0;
				y = 0;
			}
			ft_showtab(new);
		}
		else
		{
			ft_putstr("error\n");
			return (0);
		}
	}
	return (0);
}
