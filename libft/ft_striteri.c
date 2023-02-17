/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:25:58 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/14 18:22:08 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: striteri() aplica a função 'f' em cada caractere da string passada
	como argumento, passando seu índice como primeiro argumento. Cada caractere é
	passado por endereço para 'f' para ser modificado se necessário.
	
*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
/*#include <stdio.h>

void ft_printchar(unsigned int n, char *str)
{
	int num = '0' + n;
	write(1, &(num), 1);
	write(1, str, 1);
}

int main(void)
{
	char str[10] = "Oi !";
	ft_striteri(str, ft_printchar);
	return (0);
}*/
