/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:50:42 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/24 17:41:19 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: Funções auxiliares utilizadas no programa.
*/

#include "libft.h"

/* ft_strlen() irá calcular o tamanho do array */
size_t	ft_len(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* ft_strchr() irá encontrar a primeira ocorrência de um caractere */
char	*ft_chr(char *s1, int c)
{
	size_t	i;

	i = 0;
	if (!s1)
	{
		return (NULL);
	}
	if (c == '\0')
	{
		return ((char *)&s1[ft_len(s1)]);
	}
	while (s1[i] != c)
	{
		if (s1[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return ((char *)s1 + i);
}

/* ft_strjoin() Retorna uma nova string, que é o resultado da concatenação de
duas strings. */
char	*ft_join(char *s, char *buff)
{
	size_t	i;
	size_t	j;
	char	*s2;

	if (!s)
	{
		s = (char *)malloc(1 * sizeof(char));
		s[0] = '\0';
	}
	if (!s || !buff)
		return (NULL);
	s2 = malloc(sizeof(char) * ((ft_len(s) + ft_len(buff)) + 1));
	if (s2 == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (s)
		while (s[++i] != '\0')
			s2[i] = s[i];
	while (buff[j] != '\0')
		s2[i++] = buff[j++];
	s2[ft_len(s) + ft_len(buff)] = '\0';
	free(s);
	return (s2);
}

/* ft_get_line() extrai a linha (terminando em quebra de linha e '\0' em EOF) da
variável estática. Retorna string com a linha completa terminando em '\n' */
char	*ft_get_line(char *c)
{
	int		i;
	char	*src;

	i = 0;
	if (!c[i])
		return (NULL);
	while (c[i] && c[i] != '\n')
		i++;
	src = (char *)malloc((i + 2) * sizeof(char));
	if (!src)
		return (NULL);
	i = 0;
	while (c[i] && c[i] != '\n')
	{
		src[i] = c[i];
		i++;
	}
	if (c[i] == '\n')
	{
		src[i] = c[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}

/* ft_new_line() armazena na variável estática cumulativa a nova variável
atualizada com o que resta da original, menos a linha extraída.
Return: A nova string atualizada com o que resta da estática original,
menos a linha extraída.
*/
char	*ft_new_line(char *s)
{
	int			i;
	int			j;
	char		*src;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (!s[i])
	{
		free(s);
		return (NULL);
	}
	src = (char *)malloc((ft_len(s) - i + 1) * sizeof(char));
	if (!src)
		return (NULL);
	i++;
	j = 0;
	while (s[i])
		src[j++] = s[i++];
	src[j] = '\0';
	free(s);
	return (src);
}
