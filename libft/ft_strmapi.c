/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:22:23 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:23:03 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: strmapi() aplica a função 'f' a cada caractere da string 's' para
	criar uma nova string (com malloc(3)) resultante de sucessivas aplicações
	de 'f'. Ou seja, cria uma nova string a partir da modificação da string com
	a função especificada.
*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>

char test_func(unsigned int i, char str)
{
	printf("Testando minha funcao: index = %d & %c\n", i, str);
	if (str == '.')
		return (str);
	return (str - 32);
	}
int	main()
{
	char str[10] = "hello.";
	printf("O resultado e %s\n", str);
	char *resultado = ft_strmapi(str, test_func);
	printf("O resultado e %s\n", resultado);
	return (0);
}*/
