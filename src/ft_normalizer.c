/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normalizer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 12:46:46 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/16 12:47:08 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_normalizer(char *str)
{
	int a;

	a = 0;
	if (str)
	{
		while (str[a] != '\0')
		{
			if (ft_islower(str[a]) && (str[a - 1] == '\t'
						|| str[a - 1] == ' ' || a == 0))
				str[a] = ft_toupper(str[a]);
			if (ft_isupper(str[a]) && ft_isalpha(str[a - 1]))
				str[a] = ft_tolower(str[a]);
			a++;
		}
	}
	return (str);
}
