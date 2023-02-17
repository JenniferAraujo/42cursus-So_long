/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:23:31 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:23:39 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: strtrim() aloca (com malloc(3)) e retorna uma cópia de 's1' com os
	caracteres especificados em 'set' removidos desde o início e o fim da string,
	ou seja, Apara uma sequência de espaços em branco à esquerda e à direita.
	
*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*#include <stdio.h>

int		main()
{
	char *str = "Jennifer";
	char *out = "Jenni";
	char *j;
	j = ft_strtrim(str, out);
	printf("%s\n", str);
	printf("%s\n", j);
}*/
