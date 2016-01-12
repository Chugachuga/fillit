/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:36:11 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/11 12:41:13 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

char	*ft_change(char *str)
{
	char	*dst;
	int		i;
	int		j;

	i = 0;
	j = -1;
	dst = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i] != '\0')
	{
		dst[i] = str[i];
		if (i % 21 == 0)
			j++;
		/*if (j == 26)
		{
			ft_putstr("error\n");
			return (NULL);
		}*/
		if (str[i] == '#')
			dst[i] = 'A' + j;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
