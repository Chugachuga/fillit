/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_emptylinecolumn.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 16:15:56 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/05 16:47:40 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_emptypeertopeer(char **tab)
{
	if (ft_cisempty(tab, 0) == 1 && ft_cisempty(tab, 2) == 1
			&& ft_cisempty(tab, 1) == 0 && ft_cisempty(tab, 3) == 0)
		return (0);
	if (ft_cisempty(tab, 0) == 0 && ft_cisempty(tab, 2) == 0
			&& ft_cisempty(tab, 1) == 1 && ft_cisempty(tab, 3) == 1)
		return (0);
	if (ft_lisempty(tab, 0) == 1 && ft_lisempty(tab, 2) == 1
			&& ft_lisempty(tab, 1) == 0 && ft_lisempty(tab, 3) == 0)
		return (0);
	if (ft_lisempty(tab, 0) == 0 && ft_lisempty(tab, 1) == 1
			&& ft_lisempty(tab, 2) == 1 && ft_lisempty(tab, 3) == 0)
		return (0);
	if (ft_cisempty(tab, 0) == 0 && ft_cisempty(tab, 2) == 1
			&& ft_cisempty(tab, 1) == 1 && ft_cisempty(tab, 3) == 0)
		return (0);
	return (1);
}

int		ft_emptycrox(char **tab)
{
	if (ft_cisempty(tab, 0) == 0 && ft_cisempty(tab, 1) == 1
			&& ft_lisempty(tab, 2) == 1 & ft_lisempty(tab, 3) == 1)
		return (0);
	if (ft_cisempty(tab, 0) == 0 && ft_cisempty(tab, 1) == 1
			&& ft_lisempty(tab, 0) == 1 & ft_lisempty(tab, 1) == 1)
		return (0);
	if (ft_cisempty(tab, 3) == 0 && ft_cisempty(tab, 2) == 1
			&& ft_lisempty(tab, 0) == 1 & ft_lisempty(tab, 1) == 1)
		return (0);
	if (ft_cisempty(tab, 3) == 0 && ft_cisempty(tab, 2) == 1
			&& ft_lisempty(tab, 2) == 1 & ft_lisempty(tab, 3) == 1)
		return (0);
	else
		return (1);
}

int		ft_emptycrox2(char **tab)
{
	if (ft_lisempty(tab, 0) == 0 && ft_lisempty(tab, 1) == 1
			&& ft_cisempty(tab, 2) == 1 & ft_cisempty(tab, 3) == 1)
		return (0);
	if (ft_lisempty(tab, 0) == 0 && ft_lisempty(tab, 1) == 1
			&& ft_cisempty(tab, 0) == 1 & ft_cisempty(tab, 1) == 1)
		return (0);
	if (ft_lisempty(tab, 3) == 0 && ft_lisempty(tab, 2) == 1
			&& ft_cisempty(tab, 0) == 1 & ft_cisempty(tab, 1) == 1)
		return (0);
	if (ft_lisempty(tab, 3) == 0 && ft_lisempty(tab, 2) == 1
			&& ft_cisempty(tab, 2) == 1 & ft_cisempty(tab, 3) == 1)
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
