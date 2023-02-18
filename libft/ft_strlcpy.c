/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:37:04 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:29:43 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: strlcpy() copia strings, considera o tamanho total de memória para
	a string e garante terminar a string incluindo o byte NULL.
*/
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}

/*#include <stdio.h>
int	main(void)
{
	const char	src[] = "Oliveira";
	char	dest[] = "Jennifer";
	unsigned int n = 10;
	printf("%ld\n", ft_strlcpy(dest, src, n));
}*/
