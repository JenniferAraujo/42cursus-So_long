/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:24:08 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:24:44 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: substr() extrai a substring da string, aloca (com malloc(3)) e
	retorna uma substring da string 's'. A substring começa no índice 'start'
	e tem tamanho máximo 'len'.
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

/*#include <stdio.h>

int	main()
{
    char s[] = "Extraindo uma substring de s";
 
    int start = 10;
    int len = 30;
 
    char* str = ft_substr(s, start, len);
 
    printf("%s\n", str);
 
    return (0);
}*/
