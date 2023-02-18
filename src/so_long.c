/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:43:55 by jede-ara          #+#    #+#             */
/*   Updated: 2023/02/18 09:18:10 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	snack_counter(t_game *game)
{
	int	x;
	int	y;
	int	c;

	x = 0;
	y = 0;
	c = 0;
	while (x < game->line)
	{
		while (y < game->col)
		{
			if (game->map[x][y] == 'C')
			{
				c++;
			}
			y++;
		}
		y = 0;
		x++;
	}
	return (c);
}

static void	start_map(t_game *game)
{
	game->player_x = 0;
	game->player_y = 0;
	game->exit = 0;
	game->player = 0;
	game->line = 0;
	game->col = 0;
	game->end_game = 0;
	game->move = 0;
}

void	player_position(t_game *game)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < game->line)
	{
		while (y < game->col)
		{
			if (game->map[x][y] == 'P')
			{
				game->player_y = x;
				game->player_x = y;
			}
			y++;
		}
		y = 0;
		x++;
	}
}

int main(int ac, char **av)
{
	int fd_x;
	int fd_y;
	int y,x;
	t_game game;
	int fd;
	start_map(&game);
	if(ac == 2)
	{
		game.mlx = mlx_init();
		fd_x = open(av[1],O_RDONLY);
		fd_y = open(av[1],O_RDONLY);
		x = get_col_size(fd_x);
		y = get_line_size(fd_y);
		if(x == -1)
		{
			printf("ERROR\n");
			exit(0);
			return 0;
		}
		game.col = x;
		game.line = y;
		close(fd_x);
		close(fd_y);
		fd = open(av[1],O_RDONLY);
		get_maps(&game, fd);
		//ft_printf("%s\n",game.map[0]);
		//ft_printf("%s\n",game.map[1]);
		//ft_printf("%s\n",game.map[2]);
		//ft_printf("%s\n",game.map[3]);
		//ft_printf("%s\n",game.map[4]);
		game.win = mlx_new_window(game.mlx,x*64,y*64,"so_long");
		game.score = snack_counter(&game);
		player_position(&game);
		printf("game score %d \n", game.score);
		mlx_hook(game.win,02,1L,check_key,&game);
		mlx_hook(game.win,17, 1L << 17,free_img,&game);
		//printf ("Checka essa merda\n");
		//ft_printf("%s\n",game.map[0]);
		//ft_printf("%s\n",game.map[1]);
		//ft_printf("%s\n",game.map[2]);
		//ft_printf("%s\n",game.map[3]);
		//ft_printf("%s\n",game.map[4]);
		put_images(&game);
		render_img(&game);
		close(fd);
		mlx_loop(game.mlx);
	}
	return 0;
}