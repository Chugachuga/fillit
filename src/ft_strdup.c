/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:01:31 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/02 17:10:13 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL || s == NULL)
		return (NULL);
	ft_strcpy(str, s);
	return (str);
}
