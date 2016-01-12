/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_tet.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlouar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 10:56:47 by hlouar            #+#    #+#             */
/*   Updated: 2016/01/11 18:52:39 by gvilmont         ###   ########.fr       */
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
			ft_putchar(tab[x][y]);
			y++;
		}
		ft_putchar('\n');
		tab[x][y] = '\0';
		x++;
		y = 0;
	}
	ft_putchar('\n');
	return (tab);
}

/*int main(void)
{
	ft_initmap();
	return (0);
}*/
