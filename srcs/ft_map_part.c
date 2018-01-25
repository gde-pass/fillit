/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_part.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:05:00 by ddombya           #+#    #+#             */
/*   Updated: 2017/12/05 13:01:44 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_row(char **map)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (map[x][y] == '.')
	{
		y = 0;
		while (y < 3 && map[x][y] == '.')
			y++;
		if (map[x][y] == '.')
			x++;
	}
	return (x);
}

int			ft_column(char **map)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (map[x][y] == '.')
	{
		x = 0;
		while (x < 3 && map[x][y] == '.')
			x++;
		if (y < 3 && map[x][y] == '.')
			y++;
	}
	return (y);
}

t_bloc		ft_map_part(char **map, int row, int column)
{
	int			x;
	int			y;
	int			count;
	t_bloc		tab;

	x = 0;
	y = x;
	count = 0;
	while (count <= 3)
	{
		while (x < 4 && map[y][x] == '.')
			x++;
		if (x < 4 && map[y][x] != '.')
		{
			tab.y[count] = y - row;
			tab.x[count++] = x - column;
			x++;
		}
		if (x == 4)
		{
			y++;
			x = 0;
		}
	}
	return (tab);
}

int			ft_rc(t_bloc map, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (map.y[i] >= size)
			return ('x');
		if (map.x[i] >= size)
			return ('y');
		i++;
	}
	return (FALSE);
}

t_bloc		ft_rc_part(t_bloc *map, int n)
{
	int a;
	int b;

	a = 0;
	b = map->x[0];
	while (a < 4)
	{
		if (b > map->x[a])
			b = map->x[a];
		a++;
	}
	a = 0;
	while (n == 'x' && a < 4)
	{
		map->x[a]++;
		a++;
	}
	a = 0;
	while (n == 'y' && a < 4)
	{
		map->x[a] -= b;
		map->y[a]++;
		a++;
	}
	return (*map);
}
