/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriminoscheck.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlouar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 15:48:51 by hlouar            #+#    #+#             */
/*   Updated: 2016/01/14 18:52:23 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	ft_checkhashtag(char *str, int j)
{
	int e;
	int i;

	e = 0;
	i = j;
	while (i < 21 + j)
	{
		if (str[i] == '#')
		{
			if (i == 0 && (str[i + 1] == '#' || str[i + 5] == '#'))
				e++;
			if (i > 0 && i < (5 + j) && (str[i - 1] == '#' ||
						str[i + 1] == '#' || str[i + 5] == '#'))
				e++;
			if (i > (4 + j) && i < (14 + j) && (str[i - 1] == '#'
							|| str[i + 1] == '#' || str[i - 5] == '#'
								|| str[i + 5] == '#'))
				e++;
			if (i > (14 + j) && (str[i - 5] == '#' || str[i + 1] == '#' ||
						str[i - 1] == '#'))
				e++;
		}
		i++;
	}
	return ((e == 4) ? 1 : 0);
}

int	ft_check_map(char *str, int j)
{
	int hashtag;
	int dot;
	int i;

	i = j;
	hashtag = 0;
	dot = 0;
	while (i < 21 + j)
	{
		if (str[i] == '#')
			hashtag++;
		if (str[i] == '.')
			dot++;
		i++;
	}
	if (hashtag == 4 && dot == 12)
		return (1);
	return (0);
}

int	ft_count_tet(char *str)
{
	int i;
	int tet;

	i = 0;
	tet = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' && (str[i + 1] == '\n' || str[i + 1] == '\0'))
			tet++;
		i++;
	}
	return (tet);
}

int	ft_mapisvalid(char *str)
{
	int x;
	int e;
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		x = ft_check_map(str, j);
		e = ft_checkhashtag(str, j);
		if (x != 1 || e != 1 || ft_count_tet(str) > 26)
			return (0);
		else
			j += 21;
	}
	return (1);
}
