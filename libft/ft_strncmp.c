/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:39:35 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:30:13 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: strncmp() compara duas strings alphabeticamente considerando a 
	tabela ASCII, isso é feito até certa quantidade de caracteres especificado
	em unsigned int.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
/*#include <stdio.h>
#include <string.h>

int	main()
{
	char	*str1 = "c";
	char	*str2 = "a";
	unsigned int	n = 1;

	printf("%d", ft_strncmp(str1, str2, n));
}*/