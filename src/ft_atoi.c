/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:36:39 by gvilmont          #+#    #+#             */
/*   Updated: 2015/12/10 21:19:01 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	a;

	a = 0;
	result = 0;
	sign = 0;
	while (str[a] == '\t' || str[a] == ' '
			|| str[a] == '\n' || str[a] == '\v' || str[a] == '\r'
				|| str[a] == '\f')
		a++;
	if (str[a] == '-')
		sign = -1;
	else
		sign = 1;
	if (str[a] == '+' || str[a] == '-')
		a++;
	while (str[a] >= '0' && str[a] <= '9')
	{
		result = (result * 10) + (str[a] - 48);
		a++;
	}
	return (result * sign);
}
