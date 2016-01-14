/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_tet.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlouar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 10:56:47 by hlouar            #+#    #+#             */
/*   Updated: 2016/01/14 18:53:59 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

char	**ft_initmap(void)
{
	char	**tab;
	int		x;
	int		y;

	x = 0;
	y = 0;
	tab = (char**)malloc(sizeof(char*) * 17);
	while (x < 16)
	{
		tab[x] = (char*)malloc(sizeof(char) * 17);
		while (y < 16)
		{
			tab[x][y] = '.';
			y++;
		}
		tab[x][y] = '\0';
		x++;
		y = 0;
	}
	return (tab);
}
