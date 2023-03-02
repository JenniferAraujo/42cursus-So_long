/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 13:49:41 by jenny             #+#    #+#             */
/*   Updated: 2023/03/02 19:04:53 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	map_malloc_path(t_game *game, int fd)
{
	int		i;
	char	*c;
	int		y;

	i = 0;
	y = game->line + 1;
	game->map_floodfill = (char **)malloc(sizeof(char *) * y);
	if (!game->map_floodfill)
		free_img(game);
	while (i < y)
	{
		c = get_next_line(fd);
		game->map_floodfill[i] = ft_strtrim(c, "\n");
		i++;
		free(c);
	}
}

bool	fill(t_game *game, char c, int line, int col)
{
	static bool		exit = false;
	static int		cols = 0;

	if (line < 0 || col < 0 || line >= game->line || col >= game->col)
		return (false);
	else if (game->map_floodfill[line][col] == 'X')
		return (false);
	else if (game->map_floodfill[line][col] == '1')
		return (false);
	else if (game->map_floodfill[line][col] == 'E')
		exit = true;
	if (game->map_floodfill[line][col] == 'C')
		cols++;
	game->map_floodfill[line][col] = 'X';
	fill(game, c, line + 1, col);
	fill(game, c, line, col + 1);
	fill(game, c, line - 1, col);
	fill(game, c, line, col - 1);
	return (cols == game->score && exit);
}

int	floodfill(t_game *game)
{
	char	b;
	int		line;
	int		col;
	bool	valid;

	b = game->map_floodfill[game->player_y][game->player_x];
	line = game->player_y;
	col = game->player_x;
	valid = fill(game, b, line, col);
	return (valid);
}

void	valid_path(t_game *game, int fd)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	map_malloc_path(game, fd);
	if (!floodfill(game))
	{
		ft_printf ("Error\nInvalid path to on the map\n");
		free_img(game);
		close(fd);
	}
	else
		ft_printf ("Error\nValid path to on the map\n");
	while (i < game->line)
	{
		j = 0;
		while (j < game->col)
		{
			ft_printf("%c", game->map_floodfill[i][j]);
			j++;
		}
		i++;
		ft_printf("\n");
	}
}
