/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:29:33 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/14 18:27:47 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: isascii() verifica se os caracteres são pertencentes à tabela ASCII. 
	
*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main()
{
	int c;
	
	c = 'j';
	if(ft_isascii(c))
		printf( "%c pertence a tabela ASCII\n", c);
	else 
		printf("%c não pertence a tabela ASCII\n", c);
}*/