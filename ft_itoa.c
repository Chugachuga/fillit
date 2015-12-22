/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:27:33 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/14 19:44:52 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_intlen(int i)
{
	int a;

	a = 0;
	if (i == 0)
		return (1);
	while (i != 0)
	{
		a++;
		i = i / 10;
	}
	return (a);
}

static int		ft_isnegative(int j)
{
	if (j < 0)
		return (1);
	else
		return (0);
}

static char		*ft_return(int n, size_t len)
{
	char	*str;

	str = NULL;
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n)
	{
		len--;
		str[len] = ((n % 10) + '0');
		n = n / 10;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	int	len;

	len = ft_intlen(n) + ft_isnegative(n);
	if (n == 0 || !n)
		return ("0\0");
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
		return (ft_return(n, len));
}
