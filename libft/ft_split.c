/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:19:04 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/15 15:36:55 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: split() aloca (com malloc(3)) e retorna um array de strings 
	obtido pela divisão de 's' usando o caractere 'c' como delimitador, ou seja,
	divide a string com caractere especificado como delimitador, em um array de 
	strings. A matriz deve ser finalizada por um ponteiro NULL.
*/
#include "libft.h"

/*A função ft_wordcount tem a finalidade de contar a quantidade de palavras no
array de strings. Parâmetros: 's' string contendo cada palavra e 'c' caractere
usado como delimitador. Return retornará quantas palavras foram encontradas.*/
static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' )
			j++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (j);
}
/*A função ft_wordcpy tem como finalidade localizar a próxima palavra em
uma matriz. Parâmetros: 's' string contendo cada palavra, 'c' caractere usado
como delimitador e 'strs' matriz de caracteres armazenando cada palavra
individualmente. Return retornará um ponteiro de caractere para a próxima
palavra encontrada.*/

static char	*ft_wordcpy(const char *s, char c, char **strs)
{
	char	*next;

	next = ft_strchr(s, c);
	if (!next || !c)
	{
		next = (char *)s;
		while (*next)
			next++;
	}
	*strs = ft_substr(s, 0, next - s);
	return (next);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	**buffer;

	if (!s)
		return (NULL);
	strs = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(*strs));
	if (!strs)
		return (NULL);
	buffer = strs;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			s = ft_wordcpy(s, c, strs++);
	}
	*strs = 0;
	return (buffer);
}

/*#include <stdio.h>
int	main()
{
	char *string = "dividir";
	char delimitador = 'v';
	char **dividido;
	int size;
	int i;
	i = 0;

	size = ft_wordcount(string, delimitador) + 1;
	dividido = ft_split(string, delimitador);

	while(i < size)
	{
		printf("->%s\n", dividido[i++]);
	}
	printf("->%s", dividido[i]);

	return(0);
}*/
