/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_emptylinecolumn.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 16:15:56 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/21 00:07:11 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_lineisempty(char **tab, int a)
{
	int b;

	b = 0;
	while (b < 4)
	{
		if (tab[a][b] == '.')
			b++;
		else
			return (0);
	}
	return (1);
}

int		ft_columnisempty(char **tab, int b)
{
	int a;

	a = 0;
	while (a < 4)
	{
		if (tab[a][b] == '.')
			a++;
		else
			return (0);
	}
	return (1);
}

int		ft_emptylinecolumn(char **tab)
{
	int a;
	int empty;

	a = 0;
	empty = 0;
	while (a < 4)
	{
		if (ft_lineisempty(tab, a) == 1)
			empty++;
		if (ft_columnisempty(tab, a) == 1)
			empty++;
		a++;
	}
	if (empty <= 2 || empty > 5)
		return (0);
	return (empty);
}

int		ft_emptypeertopeer(char **tab)
{
	if (ft_columnisempty(tab, 0) == 1 && ft_columnisempty(tab, 2) == 1
			&& ft_columnisempty(tab, 1) == 0 && ft_columnisempty(tab, 3) == 0)
		return (0);
	if (ft_columnisempty(tab, 0) == 0 && ft_columnisempty(tab, 2) == 0
			&& ft_columnisempty(tab, 1) == 1 && ft_columnisempty(tab, 3) == 1)
		return (0);
	if (ft_lineisempty(tab, 0) == 1 && ft_lineisempty(tab, 2) == 1
			&& ft_lineisempty(tab, 1) == 0 && ft_lineisempty(tab, 3) == 0)
		return (0);
	if (ft_lineisempty(tab, 0) == 0 && ft_lineisempty(tab, 1) == 1
			&& ft_lineisempty(tab, 2) == 1 && ft_lineisempty(tab, 3) == 0)
		return (0);
	if (ft_columnisempty(tab, 0) == 0 && ft_columnisempty(tab, 2) == 1
			&& ft_columnisempty(tab, 1) == 1 && ft_columnisempty(tab, 3) == 0)
		return (0);
	return (1);
}

int		ft_emptycrox(char **tab)
{
	if (ft_columnisempty(tab, 0) == 0 && ft_columnisempty(tab, 1) == 1
			&& ft_lineisempty(tab, 2) == 1 & ft_lineisempty(tab, 3) == 1)
		return (0);
	if (ft_columnisempty(tab, 0) == 0 && ft_columnisempty(tab, 1) == 1
			&& ft_lineisempty(tab, 0) == 1 & ft_lineisempty(tab, 1) == 1)
		return (0);
	if (ft_columnisempty(tab, 3) == 0 && ft_columnisempty(tab, 2) == 1
			&& ft_lineisempty(tab, 0) == 1 & ft_lineisempty(tab, 1) == 1)
		return (0);
	if (ft_columnisempty(tab, 3) == 0 && ft_columnisempty(tab, 2) == 1
			&& ft_lineisempty(tab, 2) == 1 & ft_lineisempty(tab, 3) == 1)
		return (0);
	else
		return (1);
}

int		ft_emptycrox2(char **tab)
{
	if (ft_lineisempty(tab, 0) == 0 && ft_lineisempty(tab, 1) == 1
			&& ft_columnisempty(tab, 2) == 1 & ft_columnisempty(tab, 3) == 1)
		return (0);
	if (ft_lineisempty(tab, 0) == 0 && ft_lineisempty(tab, 1) == 1
			&& ft_columnisempty(tab, 0) == 1 & ft_columnisempty(tab, 1) == 1)
		return (0);
	if (ft_lineisempty(tab, 3) == 0 && ft_lineisempty(tab, 2) == 1
			&& ft_columnisempty(tab, 0) == 1 & ft_columnisempty(tab, 1) == 1)
		return (0);
	if (ft_lineisempty(tab, 3) == 0 && ft_lineisempty(tab, 2) == 1
			&& ft_columnisempty(tab, 2) == 1 & ft_columnisempty(tab, 3) == 1)
		return (0);
	else
		return (1);
}

int		ft_tisvalid(char **tab)
{
	if (ft_emptycrox(tab) == 0 || ft_emptypeertopeer(tab) == 0
				|| ft_emptycrox2(tab) == 0 || ft_emptylinecolumn(tab) == 0
					|| ft_cisvalid(tab) == 0)
		return (0);
	else
		return (1);
}

int		main(int argc, char *argv[])
{
	(void)argc;
	printf("%d\n", ft_tisvalid(ft_intab(ft_read_txt(argv[1]))));
	return (0);
}
