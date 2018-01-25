/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddombya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:13:08 by ddombya           #+#    #+#             */
/*   Updated: 2017/11/29 11:00:27 by abezgrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "libft.h"
# define TRUE 1
# define FALSE 0
# define SIZE_TETRIMINOS 20
# define BUFFER_SIZE 1024

int					ft_valid_tetri(char *str);
int					ft_check_tetri(char *str, int nb);
char				*ft_create_map(int size);
char				**ft_tabnew(void);
char				**tetriminos_recover(char **map, char c);
int					ft_find_empty_case(char *str, int i, char *tetris);
int					ft_row(char **map);
int					ft_column(char **map);
int					ft_size_map(int n);
char				**ft_buf_to_str(char *av);

typedef struct		s_bloc
{
	int x[4];
	int y[4];
}					t_bloc;

t_bloc				ft_rc_part(t_bloc *map, int n);
t_bloc				ft_map_part(char **map, int row, int column);
int					ft_rc(t_bloc map, int size);
void				ft_tetriminos_del(t_bloc map, char **s_map);
int					place_sharp(t_bloc *map, char **s_map, int c);
int					ft_resolve(int s, t_bloc *map, int n, char **s_map);
int					ft_parser1(t_bloc map, char **s_map, int size);
int					ft_parser2(t_bloc *map, char **s_map);
char				**ft_mapnew(int size);
void				ft_print_map(char **map, int size);
void				ft_error(void);
char				**ft_split_nl(char *str);
int					ft_usage(int ac);
char				***ft_new_tetriminos(char **map, int nb);
t_bloc				*ft_map_part_reset(char ***map, int nb, t_bloc *rc);
int					ft_count_tetriminos(char **map);

#endif
