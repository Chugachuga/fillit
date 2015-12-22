/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 14:44:01 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/21 00:13:09 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	**ft_intab(char *str)
{
	char	**tab;
	int		a;
	int		b;
	int		c;

	a = 0;
	b = 0;
	c = 0;
	tab = (char**)malloc(sizeof(char*) * 5);
	while (a < 4)
	{
		tab[a] = (char*)malloc(sizeof(char) * 5);
		while (b < 4)
		{
			tab[a][b] = str[c];
			ft_putchar(tab[a][b]);
			b++;
			c++;
		}
		c++;
		tab[a][b] = '\0';
		a++;
		b = 0;
	}
	return (tab);
}

/*int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_intab(ft_read_txt(argv[1]));
	}
	return (0);
}*/
