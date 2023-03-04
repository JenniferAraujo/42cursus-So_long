/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_validations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:53:23 by jede-ara          #+#    #+#             */
/*   Updated: 2023/03/03 19:29:42 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_args(t_game *game, int argc, char **argv)
{
	if (argc != 2)
		ft_exit("Error\nInvalid number of argument\n", game);
	if (ft_strncmp(argv[1] + ft_strlen(argv[1]) - 4, ".ber", 4))
	{
		ft_printf("Error\nFile must be of type \".ber\"\n");
		exit(0);
	}
}

static void	ft_walls(t_game *game)
{
	int	i;
	int	c;

	i = 0;
	while (game->map[i])
	{
		c = 0;
		while (game->map[i][c])
		{
			if (game->map[0][c] != '1' || game->map[game->line - 1][c] != '1')
				ft_exit("Error\nThe map is not surrounded by walls", game);
			if (game->map[i][0] != '1' || game->map[i][game->col - 1] != '1')
				ft_exit("Error\nThe map is not surrounded by walls", game);
			c++;
		}
		i++;
	}
}

void	valid_map(t_game *game)
{
	int	col;
	int	line;
	int	size;

	col = 0;
	line = 0;
	size = ft_strlen(game->map[0]);
	while (game->map[line] != 0)
	{
		col = ft_strlen(game->map[line]);
		if (col != size)
			ft_exit("Error\nYour map is not rectangular", game);
		line++;
	}
	ft_walls(game);
}

static void	check_char(t_game *game, char c, int line, int col)
{
	if (c == 'C')
		game->score++;
	else if (c == 'E')
		game->exit++;
	else if (c == 'P')
	{
		game->player++;
		game->player_x = col;
		game->player_y = line;
	}
	else if (c == '1' || c == '0')
		return ;
	else
		ft_exit("Error\nInvalid characters", game);
}

void	check_map(t_game *game)
{
	int	line;
	int	col;

	line = 0;
	while (game->map[line])
	{
		col = 0;
		while (game->map[line][col])
		{
			check_char(game, game->map[line][col], line, col);
			col++;
		}
		line++;
	}
	if (game->score == 0)
		ft_exit("Error\nThere's no sushi", game);
	else if (game->exit == 0)
		ft_exit("Error\nThere's no box", game);
	else if (game->exit > 1)
		ft_exit("Error\nJust one box per map", game);
	else if (game->player == 0)
		ft_exit("Error\nThere's no Mya", game);
	else if (game->player > 1)
		ft_exit("Error\nJust one Mya per map", game);
}
