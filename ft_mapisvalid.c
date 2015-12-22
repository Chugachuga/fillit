/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mapisvalid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:37:24 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/21 00:11:21 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

/*int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("verif column : %d\n", ft_columnisvalid(ft_read_txt(argv[1])));
		printf("verif line : %d\n", ft_lineisvalid(ft_read_txt(argv[1])));
		printf(" map : %d\n", ft_mapisvalid(ft_read_txt(argv[1])));
	}
	return (0);
}*/
