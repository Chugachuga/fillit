/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putintab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:59:04 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/14 18:51:33 by gvilmont         ###   ########.fr       */
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
