/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:03:15 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/14 18:30:08 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: memchr() procura a primeira ocorrência do caractere c nos primeiros
	n bytes da string apontada pelo argumento str.
*/
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	chr;

	s = (unsigned char *)str;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*s == chr)
			return (s);
		s++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int	main () 
{
   const char str[] = "Testando.essa.função";
   const char ch = '.';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("Depois da ocorrência %c temos  %s\n", ch, ret);

   return(0);
}*/
