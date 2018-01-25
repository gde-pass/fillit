/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:35:01 by ddombya           #+#    #+#             */
/*   Updated: 2017/12/05 16:25:19 by ddombya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_buf_to_str(char *av)
{
	char	buf[BUFFER_SIZE + 1];
	char	*str;
	int		fd;
	int		ret;

	fd = open(av, O_RDONLY);
	ret = read(fd, buf, BUFFER_SIZE);
	if (fd == -1)
		ft_error();
	if (ret == -1)
		ft_error();
	buf[ret] = '\0';
	str = ft_strdup(buf);
	if ((ft_valid_tetri(str) != TRUE || ft_check_tetri(str, 1) != TRUE))
		ft_error();
	close(fd);
	return (ft_split_nl(str));
}

int			main(int ac, char **av)
{
	char	***tabptr;
	char	**str;
	char	**solve_map;
	int		nb[2];
	t_bloc	*map;

	ft_usage(ac);
	map = NULL;
	str = ft_buf_to_str(av[1]);
	nb[0] = ft_count_tetriminos(str);
	nb[1] = ft_size_map(nb[0]);
	tabptr = ft_new_tetriminos(str, nb[0]);
	map = ft_map_part_reset(tabptr, nb[0], map);
	free(tabptr);
	solve_map = ft_mapnew(nb[1]);
	while (ft_resolve(nb[1], map, nb[0], ft_mapnew(nb[1])) != TRUE)
		nb[1]++;
	return (0);
}
