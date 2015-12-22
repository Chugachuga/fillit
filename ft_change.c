/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:36:11 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/21 00:13:45 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_change(char *dst)
{
	char	*tmp;
	int		e;
	int		i;

	dst = ft_read_txt(dst);
	i = 0;
	while (tmp)
	{
		i++;
		if ((dst[i] = '#'))
		{
			dst[i] = tmp[i];
			tmp[i] = 'A';
			i++;
		}
	}
	tmp[i] = '\0';
	return (tmp);
}
