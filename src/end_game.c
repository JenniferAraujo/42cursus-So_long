/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:02:57 by jede-ara          #+#    #+#             */
/*   Updated: 2023/03/02 19:06:21 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	free_img(t_game *game)
{
	mlx_destroy_image(game->mlx, game->img.exit);
	if (game->img.collectible)
		mlx_destroy_image(game->mlx, game->img.collectible);
	if (game->img.player)
		mlx_destroy_image(game->mlx, game->img.player);
	if (game->img.floor)
		mlx_destroy_image(game->mlx, game->img.floor);
	if (game->img.wall)
		mlx_destroy_image(game->mlx, game->img.wall);
	if (game->img.on_box)
		mlx_destroy_image(game->mlx, game->img.on_box);
	mlx_destroy_display(game->mlx);
	free_map(game);
	free(game->mlx);
	exit(0);
}

void	ft_exit(char *s, t_game *game)
{
	ft_printf("Error\nSomething is wrong!\n%s\n", s);
	if (game->map[0])
		free_map(game);
	if (game->map_floodfill[0])
		free_map(game);
	exit(0);
}

void	free_map(t_game *game)
{
	int	i;

	i = 0;
	while (game->map[i])
	{
		free(game->map[i]);
		i++;
	}
	free(game->map);
	i = 0;
	while (game->map_floodfill[i])
	{
		free(game->map_floodfill[i]);
		i++;
	}
	free(game->map_floodfill);
}

int	close_window(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
	free_img(game);
	free_map(game);
	exit (0);
}
