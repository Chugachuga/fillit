/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 16:30:17 by gvilmont          #+#    #+#             */
/*   Updated: 2016/01/14 18:51:11 by gvilmont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft.h"
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

int		ft_mapisvalid(char *str);
char	*ft_read_txt(char *dst);
char	**ft_intab(char *str);
char	*ft_change(char *str);
char	*ft_rapl_fonctions(char *str);
char	**ft_initmap(void);
void	ft_showtab(char **tab);
int		ft_carlen(char **tab);
char	**ft_putintab(char **new, char *tab, int x, int y);

#endif
