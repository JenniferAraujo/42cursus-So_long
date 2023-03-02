/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_validations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:30:44 by jede-ara          #+#    #+#             */
/*   Updated: 2023/03/02 13:40:18 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	start_validations(t_game *game, int fd)
{
	ft_printf("Init validations...\n");
	check_map(game);
	valid_map(game);
	valid_path(game, fd);
}
