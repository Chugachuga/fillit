/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cisempty.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 18:37:17 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/05 16:47:18 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int	ft_cisempty(char **tab, int b)
{
	int	a;

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