/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 14:29:06 by ddombya           #+#    #+#             */
/*   Updated: 2017/12/05 15:32:02 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_parser1(t_bloc map, char **solve_map, int size)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (map.y[i] >= size)
			return ('y');
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (map.x[i] > size)
			return ('x');
		i++;
	}
	if (solve_map[map.y[0]][map.x[0]] == '.' && solve_map[map.y[1]][map.x[1]]
		== '.' && solve_map[map.y[2]][map.x[2]] == '.' && solve_map[map.y[3]]
		[map.x[3]] == '.')
		return (TRUE);
	return (FALSE);
}

int			ft_parser2(t_bloc *map, char **solve_map)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (i < 4)
	{
		if (solve_map[map->y[i]][map->x[i]] == '.')
			size++;
		i++;
	}
	if (size == 4)
		return (TRUE);
	return (FALSE);
}
