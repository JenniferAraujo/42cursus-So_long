/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:10:19 by jede-ara          #+#    #+#             */
/*   Updated: 2022/12/02 17:18:11 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_length_pointer(uintptr_t n)
{
	size_t	length;

	length = 0;
	while (n != 0)
	{
		length++;
		n = n / 16;
	}
	return (length);
}

void	ft_ptr(uintptr_t ptr)
{
	if (ptr >= 16)
	{
		ft_ptr(ptr / 16);
		ft_ptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar(ptr + 48);
		else
			ft_putchar(ptr - 10 + 'a');
	}
}

/*
	DESCRIÇÃO:  print_pointer() o argumento do ponteiro deve ser impresso
	no formato hexadecimal.
*/

int	ft_print_pointer(unsigned long long ptr)
{
	int	i;

	if (ptr == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	i = 2;
	ft_ptr(ptr);
	i += ft_length_pointer(ptr);
	return (i);
}
