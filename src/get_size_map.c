/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:28:37 by jenny             #+#    #+#             */
/*   Updated: 2023/02/27 15:55:27 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	get_col_size(t_game *game, int fd)
{
	char	*c;
	int		y;
	int		temp;

	c = get_next_line(fd);
	y = ft_strlen(c)-1;
	temp = y;
	free(c);
	if (fd < 0)
		ft_exit("Error fd empty\n", game);
	while (1) 
	{
		c = get_next_line(fd);
		if (!c)
			break ;
		y = ft_strlen(c)-1;
		if (temp != y)
			return (-1);
		free(c);
	}
	return y;
}

int	get_line_size(int fd)
{
	char	*c;
	int	x;
	x = 0;
	while (1)
	{
		c = get_next_line(fd);
		if (!c)
			break ;
		x++;
		free(c);
	}
	return x;
}
