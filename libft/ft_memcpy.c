/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:12:37 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:27:52 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: memcpy() copia blocos de memória. Ou seja, copia n caracteres da 
	área de memória src para a área de memória dst. As áreas de memória não devem 
	se sobrepor.
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*#include <stdio.h>
#include <stddef.h>
#include <string.h>
int main(void)
{
	char src[100] = "Jennifer Araujo";
	char dest[100] = "Jennifer Oliveira";
	size_t n = 5;
	
	printf("o endereço de memoria de src é %p\n", (void *) &src);
	printf("o endereço de memoria de dest é %p\n", (void *) &dest);
}*/