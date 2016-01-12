/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapisvalid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:37:24 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/05 16:48:23 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	ft_columnisvalid(char *str)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		if (str[a] != '\n')
			b++;
		if (str[a] == '\n' && str[a + 1] != '\n')
		{
			if (b == 4)
				b = 0;
			else
				return (0);
		}
		a++;
	}
	return (1);
}

int	ft_lineisvalid(char *str)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		if (str[a] == '\n' && (str[a + 1] != '\n' || str[a + 1] != '\0'))
			b++;
		if (str[a] == '\n' && str[a + 1] == '\n' && str[a + 2] == '\0')
			return (0);
		if (str[a] == '\n' && (str[a + 1] == '\n'
						|| str[a + 1] == '\0'))
		{
			a++;
			if (b != 4)
				return (0);
			b = 0;
		}
		a++;
	}
	return (1);
}

int	ft_mapisvalid(char *str)
{
	if (!str)
		return (0);
	if (ft_columnisvalid(str) == 0 || ft_lineisvalid(str) == 0)
		return (0);
	else
		return (1);
}
