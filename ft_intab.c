/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 14:44:01 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/11 16:02:09 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_intab1(char *str, int c, int a, char **tab)
{
	int		b;

	b = 0;
	tab[a] = (char*)malloc(sizeof(char) * 21);
	while (b < 20)
	{
		tab[a][b] = str[c];
		ft_putchar(tab[a][b]);
		c++;
		b++;
	}
	ft_putchar('\n');
	tab[a][b] = '\0';
	return (tab[a]);
}

char	**ft_intab(char *str)
{
	char	**tab;
	int		c;
	int		a;

	c = 0;
	a = 0;
	tab = (char**)malloc(sizeof(char*) * 27);
	while (str[c] != '\0')
	{
		tab[a] = ft_intab1(str, c, a, tab);
		c += 21;
		a++;
	}
	return (tab);
}

/*int		main(int argc, char *argv[])
{
	if (argc == 2)
		ft_intab(ft_read_txt(argv[1]));
	return (0);
}*/
