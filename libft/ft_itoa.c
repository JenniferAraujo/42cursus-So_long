/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:27:16 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:27:23 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: itoa() aloca (com malloc(3)) e retorna uma string representando 
	o inteiro recebido como argumento, ou seja, converte inteiro em string ASCII.
	Números negativos devem ser tratados.
*/
#include "libft.h"

static int	size(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		++len;
	while (n != 0)
	{
		++len;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		len;
	long	num;

	num = n;
	len = size(n);
	r = malloc(sizeof(char) * (len +1));
	if (r == NULL)
		return (NULL);
	r[len] = '\0';
	if (num < 0)
	{
		r[0] = '-';
		num = num * -1;
	}
	else if (num == 0)
		r[0] = '0';
	while (num != 0)
	{
		--len;
		r[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (r);
}

/*#include <stdio.h>

int	main(void)
{
	int a = 1;
	int b = 0;
	int c = 42;
	ft_itoa(a);
	printf("%s\n", ft_itoa(a));
	printf("%s\n", ft_itoa(b));
	ft_itoa(c);
	printf("%s\n", ft_itoa(c));
	return (0);
}*/
