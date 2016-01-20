/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_emptylinecolumn.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 18:27:02 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/05 16:45:44 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_emptylinecolumn(char **tab)
{
	int	a;
	int	empty;

	a = 0;
	empty = 0;
	while (a < 4)
	{
		if (ft_lisempty(tab, a) == 1)
			empty++;
		if (ft_cisempty(tab, a) == 1)
			empty++;
		a++;
	}
	if (empty <= 2 || empty > 5)
		return (0);
	return (empty);
}
