/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:16:07 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:28:01 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: memmove() copia n caracteres de str2 para str1, mas para blocos de
	memória sobrepostos, memmove() é uma abordagem mais segura que memcpy.
	
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int	main() 
{
   char dest[] = "testing";
   const char src[]  = "testando";

   printf("Antes da memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("Depois da memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/
