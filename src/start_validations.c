/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_validations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:30:44 by jede-ara          #+#    #+#             */
/*   Updated: 2023/02/27 16:09:20 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void start_validations(t_game *game, int fd)
{
    ft_printf("Init validations...\n");
    check_map(game);
	valid_map(game);
	valid_path(game, fd);
}
