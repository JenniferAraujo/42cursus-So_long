/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:29:30 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:29:32 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: strjoin() concatena duas strings em uma nova string (com malloc),
	ou seja, aloca (com malloc(3)) e retorna uma nova string, que é o resultado
	da concatenação de str1 e str2. 
	
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !str)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
/*int	main(void)
{
	char s1[] = "Um + ";
	char s2[] = "dois";
 
    char* str = ft_strjoin(s1, s2);
 
    printf("%s\n", str);
 
    return (0);	
}*/
