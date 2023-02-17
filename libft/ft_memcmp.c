/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:11:06 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:27:42 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: memcmp() compara(ASCII) os primeiros n bytes da área de memória 
	str1 e área de memória str2.
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <stddef.h>
#include <string.h>
int	main (void) 
{
   
   const char str[] = "Jennifer";
   const char ch[] = "Araujo";
   size_t n = 5;
   
   printf("Testando a string com ft_memcmp() |%d|\n",ft_memcmp(str,ch,n));
   return(0);
}*/