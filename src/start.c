/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:28:43 by jenny             #+#    #+#             */
/*   Updated: 2023/02/17 13:28:56 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	free_img(t_game *game)
{
	mlx_clear_window(game->mlx, game->win);
	mlx_loop_end(game->mlx);
	mlx_destroy_image(game->mlx, game->img.collectible);
	mlx_destroy_image(game->mlx, game->img.exit);
	mlx_destroy_image(game->mlx, game->img.background);
	mlx_destroy_image(game->mlx, game->img.player);
	mlx_destroy_image(game->mlx, game->img.wall);
	mlx_destroy_window(game->mlx, game->win);
	mlx_destroy_display(game->mlx);
	free_map(game);
	free(game->mlx);
	exit(3);
	return (0);
}

//transformando o ficheiro .xpm em imagem que pode ser chamada na window
void	put_images(t_game *game)
{
	int len;
	
	len = 64;
	game->img.wall = mlx_xpm_file_to_image(game->mlx, WALL, &len, &len);
	game->img.player = mlx_xpm_file_to_image(game->mlx, PLAYER, &len, &len);
	game->img.background = mlx_xpm_file_to_image(game->mlx, BACKGROUND, &len, &len);
	game->img.exit = mlx_xpm_file_to_image(game->mlx, BOX, &len, &len);
	game->img.collectible = mlx_xpm_file_to_image(game->mlx, SNACK, &len, &len);
}

void	ft_char(int x, int y, char c, t_game *game)
{
	if (c == '1')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.wall, x * 64, y * 64);
	if (c == '0')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.background, x * 64, y * 64);
	if (c == 'P')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.player, x * 64, y * 64);
	if (c == 'E')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.exit, x * 64, y * 64);
	if (c == 'C')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img.collectible, x * 64, y * 64);
}

//coloca na window as imagens no lugar certo
int	render_img(t_game *game)
{
	int	y;
	int	x;

	y = 0;
	while (y < game->line)
	{
		x = 0;
		while (x < game->col)
		{
			printf("%c\n", game->map[y][x]);
			ft_char(x, y, game->map[y][x], game);
			x++;
		}
		y++;
	}
	return (0);
}

void	get_maps(t_game *game, int fd)
{
	int	i;
	char	*c;
	
	i = 0;
	game->map = (char **)malloc(sizeof(char *) * game->line);
	if (!game->map)
		exit(1);
	while (i < game->line)
	{
		c  = get_next_line(fd);
		printf("output gnl: %s\n", c);
		game->map[i] = ft_strtrim(c, "\n");
		printf("Passado malloc: %s\n", game->map[i]);
		i++;
		free(c);
	}
}
static int	valid_move(t_game *game, int col, int line, int pressed_key)
{
	if (game->map[line][col] == '1')
		return (-1);
	if (game->map[line][col] == 'C')
		game->score--;
	if (game->map[line][col] == 'E' && game->score == 0)
	{
		game->end_game = 1;
		game->map[game->player_x][game->player_y] = '0';
		ft_printf("Movements: %d\n", game->move++);
		ft_printf("\n\nYOU WIN 🥳🏆\n\n");
		return (-1);
	}
	else if (game->map[line][col] == 'E')
		return (-1);
	if (pressed_key != W && pressed_key != S && pressed_key != A
		&& pressed_key != D)
		return (-1);
	else
		return (1);
}

static void	move(t_game *game, int col, int line, int pressed_key)
{
	int	valid;
	int	tcol;
	int	tline;

	tcol = game->player_y;
	tline = game->player_x;
	(void)pressed_key;
	valid = valid_move(game, col, line, pressed_key);
	if (valid != -1)
	{
		game->map[tcol][tline] = '0';
		game->player_y = line;
		game->player_x = col;
		game->map[line][col] = 'P';
		printf("Movements: %d\n", game->move++);
		render_img(game);
		//mlx_put_image_to_window(game->mlx, game->win, game->img.background, tcol*64, tline*64);
		//mlx_put_image_to_window(game->mlx, game->win, game->img.player, col*64, line*64);
	}
	
}

int	check_key(int keycode, t_game *game)
{
	int	col;
	int	line;

	col = game->player_x;
	line = game->player_y;
	ft_printf ("CENAS\n");
	ft_printf("Player y: %i\n", game->player_x);
	ft_printf("PLayer x: %i\n", game->player_y);
	if (keycode == A)
		col--;
	else if (keycode == W)
		line--;
	else if (keycode == S)
		line++;
	else if (keycode == D)
		col++;
	else if (keycode == ESC)
		free_img(game);
	if (game->end_game != 1)
		move(game, col, line, keycode);
	return (0);
}
