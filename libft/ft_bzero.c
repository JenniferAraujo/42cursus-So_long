/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:02:22 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:26:33 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIÇÃO: bzero() apaga os dados nos n bytes da memória começando no local
	apontado por s, escrevendo zeros(bytes contendo '\0') para essa área.
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
    char buffer[10] = "Oliveira";

    ft_bzero(buffer, 10);
    printf("%s",buffer);
}*/
