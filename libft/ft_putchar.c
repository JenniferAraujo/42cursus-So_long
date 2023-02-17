/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:07:10 by jede-ara          #+#    #+#             */
/*   Updated: 2022/12/02 17:06:17 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIÇÃO: putchar() grava um caractere especificado na unidade de saída
	fornecida.
*/

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
