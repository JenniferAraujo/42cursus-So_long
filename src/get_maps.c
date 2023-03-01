/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_maps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:02:04 by jede-ara          #+#    #+#             */
/*   Updated: 2023/03/01 18:29:13 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	get_maps(t_game *game, int fd)
{
	int	i;
	char	*c;
	int y;
	
	i = 0;
	y = game->line + 1;
	game->map = (char **)malloc(sizeof(char *) * y);
	if (!game->map)
		ft_exit("Error\n", game);
	while (i < y)
	{
		c  = get_next_line(fd);
		game->map[i] = ft_strtrim(c, "\n");
		i++;
		free(c);
	}
}
