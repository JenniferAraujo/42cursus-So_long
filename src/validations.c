/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:30:44 by jede-ara          #+#    #+#             */
/*   Updated: 2023/02/23 19:01:37 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

/*void	map_malloc_path(t_game	*game, int fd)
{
	int		i;
	char	*out;
	int		y;

	y = game->line + 1;
	i = 0;
	open_map(game);
	game->map_floodfill = (char **)malloc(sizeof(char *) * y);
	if (!game->map_floodfill)
		free_img(game);
	while (i < y)
	{
		out = get_next_line(game->map_fd);
		game->map_floodfill[i] = ft_strtrim(out, "\n");
		free(out);
		i++;
	}
	game->array_flood = true;
	close_map(game);
}

bool	fill(t_game *game, char begin, int row, int col)
{
	static bool		exit = false;
	static int		cols = 0;

	if (row < 0 || col < 0 || row >= game->line || col >= game->col)
		return (false);
	else if (game->map_floodfill[row][col] == 'J')
		return (false);
	else if (game->map_floodfill[row][col] == '1')
		return (false);
	else if (game->map_floodfill[row][col] == 'E')
		exit = true;
	if (game->map_floodfill[row][col] == 'C')
		cols++;
	game->map_floodfill[row][col] = 'J';
	fill(game, begin, row + 1, col);
	fill(game, begin, row, col + 1);
	fill(game, begin, row - 1, col);
	fill(game, begin, row, col - 1);
	return (cols == game->score && exit);
}

int	floodfill(t_game *game)
{
	char	begin;
	int		row;
	int		col;
	bool	valid;

	begin = game->map_floodfill[game->player_y][game->player_x];
	row = game->player_y;
	col = game->player_x;
	valid = fill(game, begin, row, col);
	return (valid);
}

void	check_path(t_game *game)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	map_malloc_path(game);
	if (!floodfill(game))
		send_error("✗ Invalid path on the map\n", game);
	else
		ft_printf ("✔ Valid path to on the map\n");
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
}*/

void start_validations(t_game *game)
{
    ft_printf("Init validations...\n");
    valid_map(game);
    check_map(game);
}