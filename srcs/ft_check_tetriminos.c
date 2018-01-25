/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tetriminos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:43:45 by ddombya           #+#    #+#             */
/*   Updated: 2017/12/05 16:57:35 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_valid_tetri(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i != 21)
	{
		if (str[i] == '#' && (i - 1 >= 0) && str[i - 1] == '#')
			count++;
		if (str[i] == '#' && (i + 1 < 21) && str[i + 1] == '#')
			count++;
		if (str[i] == '#' && (i - 5 >= 0) && str[i - 5] == '#')
			count++;
		if (str[i] == '#' && (i + 5 < 21) && str[i + 5] == '#')
			count++;
		if (str[19] == '\0')
			return (FALSE);
		i++;
	}
	if (str[20] && (count == 6 || count == 8))
		return (ft_valid_tetri(str + 21));
	if (count == 6 || count == 8)
		return (TRUE);
	return (FALSE);
}

int		ft_check_tetri(char *str, int nb)
{
	int i;
	int j;
	int k;

	i = -1;
	j = 0;
	k = 0;
	if (!str || !*str || str[4] != '\n' || str[9] != '\n' || str[14] != '\n'
		|| str[19] != '\n' || nb > 26)
		return (FALSE);
	while (++i <= 19)
	{
		if (str[i] != '\n' && str[i] != '.' && str[i] != '#')
			return (FALSE);
		if (str[i] == '\n')
			j++;
		if (str[i] == '#')
			k++;
	}
	if (j == 4 && k == 4 && str[19] == '\n' && str[20])
		return (ft_check_tetri((str + 21), (nb + 1)));
	if (j == 4 && k == 4 && str[19] == '\n' && !str[20])
		return (TRUE);
	return (FALSE);
}
