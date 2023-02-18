/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:28:37 by jenny             #+#    #+#             */
/*   Updated: 2023/02/18 09:18:08 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int get_col_size(int fd)
{
	char *c;
	int y;
	int temp;
	
	c = get_next_line(fd);
	y = ft_strlen(c)-1;
	temp = y;
	free(c);
	if (fd < 0)
	{
		ft_printf("Error\nThis file does not exist.\n\n");
		exit(0);
	}
	while((c = get_next_line(fd)))
	{
		y = ft_strlen(c)-1;
		if(temp != y)
			return (-1);
		free(c);
	}
	return y;
}

int get_line_size(int fd)
{
	char *c;
	int x;
	x = 0;
	while((c = get_next_line(fd)))
	{
		x++;
		free(c);
	}
	return x;
}
