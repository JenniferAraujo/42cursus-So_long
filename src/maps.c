/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maps.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:28:37 by jenny             #+#    #+#             */
/*   Updated: 2023/02/16 15:45:50 by jede-ara         ###   ########.fr       */
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
