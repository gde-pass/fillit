/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 17:42:02 by ddombya           #+#    #+#             */
/*   Updated: 2017/12/05 15:44:13 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_tabnew(void)
{
	int		i;
	char	**tab;

	i = 0;
	tab = (char **)malloc(sizeof(*tab) * 5);
	while (i < 4)
	{
		tab[i] = (char *)malloc(sizeof(tab) * 5);
		tab[i][5] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

char		**tetriminos_recover(char **map, char c)
{
	int		x;
	int		y;
	char	**str;

	x = 0;
	str = ft_tabnew();
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			str[x][y] = map[x][y];
			if (str[x][y] == '#')
				str[x][y] = c;
			y++;
		}
		x++;
	}
	return (str);
}

int			ft_size_map(int n)
{
	int i;

	i = 0;
	while ((i * i) <= n * 4)
		i++;
	return (i - 1);
}

int			ft_count_tetriminos(char **map)
{
	int i;

	i = 0;
	while (map[i])
		i++;
	return (i / 4);
}
