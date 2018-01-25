/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:00:51 by ddombya           #+#    #+#             */
/*   Updated: 2017/12/05 15:32:14 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			ft_tetriminos_del(t_bloc map, char **s_map)
{
	if (s_map[map.y[0]][map.x[0]])
		s_map[map.y[0]][map.x[0]] = '.';
	if (s_map[map.y[1]][map.x[1]])
		s_map[map.y[1]][map.x[1]] = '.';
	if (s_map[map.y[2]][map.x[2]])
		s_map[map.y[2]][map.x[2]] = '.';
	if (s_map[map.y[3]][map.x[3]])
		s_map[map.y[3]][map.x[3]] = '.';
}

int				place_sharp(t_bloc *map, char **s_map, int c)
{
	s_map[map->y[1]][map->x[1]] = c;
	s_map[map->y[2]][map->x[2]] = c;
	s_map[map->y[3]][map->x[3]] = c;
	s_map[map->y[0]][map->x[0]] = c;
	return (TRUE);
}

int				ft_resolve(int s, t_bloc *map, int n, char **s_map)
{
	static int		i = 0;
	t_bloc			tetri[1];

	if (i == n)
		return (TRUE);
	*tetri = map[i];
	while (ft_parser1(*tetri, s_map, s) != 'y')
	{
		while (ft_parser1(*tetri, s_map, s) != 'x')
		{
			if (ft_parser2(tetri, s_map) == TRUE && place_sharp(
				tetri, s_map, i + 'A') == TRUE)
			{
				i++;
				if (ft_resolve(s, map, n, s_map) == TRUE)
					ft_print_map(s_map, s);
				ft_tetriminos_del(*tetri, s_map);
				i--;
			}
			*tetri = ft_rc_part(tetri, 'x');
		}
		*tetri = ft_rc_part(tetri, 'y');
	}
	return (FALSE);
}
