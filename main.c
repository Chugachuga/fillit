/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 16:22:20 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/14 19:15:23 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char *argv[])
{
	char **tab;
	char **new;

	new = ft_initmap();
	tab = NULL;
	if (argc == 2)
	{
		if (ft_mapisvalid(ft_read_txt(argv[1])) == 1)
		{
			tab = ft_intab(ft_change(ft_rapl_fonctions(ft_read_txt(argv[1]))));
			ft_putintab(new, tab[0], 0, 0);
			ft_putintab(new, tab[1], 3, 1);
			ft_putintab(new, tab[2], 0, 1);
			ft_putintab(new, tab[3], 2, 0);
			ft_showtab(new);
		}
		else
			ft_putstr("error\n");
	}
	return (0);
}
