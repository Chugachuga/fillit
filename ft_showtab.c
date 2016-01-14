/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_showtab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 18:51:15 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/14 19:00:26 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_showtab(char **tab)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < ft_carlen(tab))
	{
		while (b < ft_carlen(tab))
		{
			ft_putchar(tab[a][b]);
			b++;
		}
		ft_putchar('\n');
		a++;
		b = 0;
	}
}
