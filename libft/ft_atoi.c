/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:01:19 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:26:37 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 DESCRIÇÃO: atoi() converte strings em números inteiros, ou seja, 
 recebe um vetor de caracteres como entrada e retorna um inteiro.
*/
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * s);
}
/*#include <unistd.h>
#include <stdio.h>

int main(void)
{
	const char *s = "   ---+--+01234506789ab567";
	printf("%d", ft_atoi(s));
}*/
