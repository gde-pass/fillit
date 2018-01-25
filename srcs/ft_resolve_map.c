/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 10:55:40 by ddombya           #+#    #+#             */
/*   Updated: 2017/12/05 15:39:10 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		***ft_new_tetriminos(char **map, int nb)
{
	char	***tab;
	int		i;
	int		n;

	i = 0;
	n = 0;
	if (!((tab = (char ***)malloc(sizeof(**tab) * (nb * 40)))))
		return (NULL);
	while (i < nb)
	{
		tab[i] = tetriminos_recover(map, 'A');
		while (n < 4 && *map)
		{
			map++;
			n++;
		}
		i++;
		n = 0;
	}
	tab[nb + 40] = NULL;
	return (tab);
}

t_bloc		*ft_map_part_reset(char ***map, int nb, t_bloc *rc)
{
	int i;

	i = 0;
	if (!((rc = (t_bloc *)malloc(sizeof(t_bloc) * (nb * 2)))))
		return (NULL);
	while (i < nb)
	{
		rc[i] = ft_map_part(map[i], ft_row(map[i]), ft_column(map[i]));
		i++;
	}
	return (rc);
}
