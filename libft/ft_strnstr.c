/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:41:00 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:30:29 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: strnstr() localiza a primeira ocorrência da string s2 terminada
	em nulo na string s1, onde não mais do que n caracteres são pesquisados. 
	Os caracteres que aparecem após um caractere nulo não são pesquisados.
*/
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	a;
	size_t	j;

	a = 0;
	if ((n == 0 && !*s2) || !*s2)
		return ((char *)s1);
	if (n == 0)
		return (NULL);
	while (s1[a] != '\0' && a < n)
	{
		j = 0;
		while (s1[a + j] != '\0' && s2[j] != '\0'
			&& s1[a + j] == s2[j] && (a + j) < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)&(s1[a]));
			j++;
		}
		a++;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main() 
{
  char * param_1 = "hello";
  char * param_2 = "ello";

  printf("This is the string %s \n", ft_strnstr(param_1, param_2, 5));

  return 0;
}*/
