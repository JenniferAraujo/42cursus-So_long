/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:25:36 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:29:09 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: strchr() retorna um ponteiro para a primeira ocorrência do caractere
	procurado ou NULL caso não encontre.
	
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)s + i);
}

/*#include <stdio.h>

int	main(void)
{
	char str[] = "jennifer oliveira";
	char c = 'o';
	printf("%s\n", ft_strchr(str, c));
}*/
