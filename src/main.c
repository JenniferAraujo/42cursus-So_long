/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:43:55 by jede-ara          #+#    #+#             */
/*   Updated: 2023/02/27 15:37:17 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	start_map(t_game *game)
{
	game->player_x = 0;
	game->player_y = 0;
	game->player_on_box = 0;
	game->exit = 0;
	game->player = 0;
	game->line = 0;
	game->col = 0;
	game->end_game = 0;
	game->move = 1;
}

void	start_game(t_game *game)
{	
	game->mlx = mlx_init();
	game->win = mlx_new_window(game->mlx, game->col * 64,
			game->line * 64, "So_long");
	mlx_hook(game->win, 02, 1L, key_handler, game);
	mlx_hook(game->win, 17, 1L << 17, close_window, game);
	put_images(game);
	render_img(game);
	mlx_loop(game->mlx);
}

int	main(int argc, char **argv)
{
	t_game	game;
	int		fd;
	int		fd_x;
	int		fd_y;
	int		fd_map;

	fd_x = open(argv[1], O_RDONLY);
	fd_y = open(argv[1], O_RDONLY);
	fd_map = open(argv[1], O_RDONLY);
	check_args(&game, argc, argv);
	start_map(&game);
	game.score = collectible_counter(&game);
	game.col = get_col_size(&game, fd_x);
	game.line = get_line_size(fd_y);
	fd = open(argv[1], O_RDONLY);
	get_maps(&game, fd);
	start_validations(&game, fd_map);
	if (game.col == -1)
		ft_exit("ERROR\n", &game);
	close(fd_x);
	close(fd_y);
	close(fd);
	close(fd_map);
	player_position(&game);
	start_game(&game);
}
