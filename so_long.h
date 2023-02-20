/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 15:17:40 by jede-ara          #+#    #+#             */
/*   Updated: 2023/02/20 19:25:26 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./minilibx/mlx.h"
# include "libft/libft.h"

# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

# define CAT "./images/cat.xpm"
# define SUSHI "./images/sushi.xpm"
# define BOX "./images/exit.xpm"
# define WALL "./images/wall.xpm"
# define FLOOR "./images/floor.xpm"
# define ON_BOX "./images/on_box.xpm"

# define W 119
# define A 97
# define S 115
# define D 100
# define ESC 65307

typedef struct s_img
{
	void	*collectible;
	void	*player;
	void	*floor;
	void	*wall;
	void	*exit;
	void	*on_box;
}	t_img;

typedef struct s_game
{
	t_img	img;
	void	*mlx;
	void	*win;
	char	**map;
	char	temp;
	int		line;
	int		col;
	int		exit;
	int		score;
	int		player;
	int		player_on_box;
	int		player_y;
	int		player_x;
	int		end_game;
	int		move;
}	t_game;


void	get_maps(t_game *game, int fd);
void check_args(int argc, char **argv);
void	ft_check_map(t_game *game);
void	ft_valid_map(t_game *game);
void	put_images(t_game *game);
int	get_line_size(int fd);
int	get_col_size(int fd);
int	render_img(t_game *game);
int		check_key(int x, t_game *game);
void	free_map(t_game *game);
void	free_img(t_game *game);
void	player_position(t_game *game);
void	ft_exit(char *s, t_game *game);
int	close_window(t_game *game);
void	print_map(t_game *game);

#endif
