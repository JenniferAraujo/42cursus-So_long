/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:53:34 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:27:06 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: isprint() verifica qualquer caractere de impressão.
	
*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*#include <stdio.h>
int	main()
{
	int c;
	
	c = '\n';
	if(ft_isprint(c))
		printf( "%c é imprimível\n", c);
	else 
		printf("%c nao é imprível\n", c);
}*/
