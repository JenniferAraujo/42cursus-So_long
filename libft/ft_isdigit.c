/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:50:24 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:27:02 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIÇÃO: isdigit() verifica se o caractere é dígito decimal.
	
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*#include <stdio.h>
int main()
{
	char c = 'a';
	int b = 5;
	printf("%d\n",ft_isdigit('5'));
}*/