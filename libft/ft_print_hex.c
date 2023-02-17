/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:06:07 by jede-ara          #+#    #+#             */
/*   Updated: 2022/12/02 17:19:51 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIÇÃO: print_hex() imprime um número em formato hexadecimal em minúsculas
	e maiúsculas.
*/

int	ft_print_hex(unsigned int n, int c)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += ft_print_hex(n / 16, c);
		count += ft_print_hex(n % 16, c);
	}
	else
	{
		if (n <= 9)
			count += ft_putchar((n + '0'));
		else
		{
			if (c == 'x')
				count += ft_putchar((n - 10 + 'a'));
			if (c == 'X')
				count += ft_putchar((n - 10 + 'A'));
		}
	}
	return (count);
}
