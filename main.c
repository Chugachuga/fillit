/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 16:22:20 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/11 16:06:23 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (ft_mapisvalid(ft_read_txt(argv[1])) == 1)
			ft_intab(ft_change(ft_rapl_fonctions(ft_read_txt(argv[1]))));
		else
			ft_putstr("error\n");
	}
	return (0);
}
