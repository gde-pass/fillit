/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:04:57 by ddombya           #+#    #+#             */
/*   Updated: 2017/12/05 15:33:52 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_error(void)
{
	write(1, "error\n", 6);
	exit(EXIT_SUCCESS);
}

int			ft_usage(int ac)
{
	if (ac != 2)
	{
		ft_putstr("usage: ./fillit target_file\n");
		exit(EXIT_FAILURE);
	}
	return (FALSE);
}

void		ft_print_map(char **map, int size)
{
	int i;
	int j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
			ft_putchar(map[i][j]);
		ft_putchar('\n');
	}
	exit(EXIT_SUCCESS);
}

char		**ft_split_nl(char *str)
{
	char **split_map;

	split_map = ft_strsplit(str, '\n');
	return (split_map);
}

char		**ft_mapnew(int size)
{
	char	**str;
	int		i;
	int		x;
	int		y;

	i = 0;
	x = -1;
	str = (char **)malloc(sizeof(*str) * (size + 1));
	while (i < size)
	{
		str[i] = (char *)malloc(sizeof(*str) * (size + 1));
		str[i][size + 1] = '\0';
		i++;
	}
	str[i] = NULL;
	while (++x < size)
	{
		y = -1;
		while (++y < size)
			str[x][y] = '.';
	}
	return (str);
}
