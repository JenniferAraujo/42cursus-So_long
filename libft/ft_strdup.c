/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:22:00 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:29:16 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: strdup() é usada para duplicar uma string. Ele retorna um ponteiro
	para uma string de bytes terminada em nulo.
	
*/
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*dest;
	unsigned int	i;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strdup("Hello world!"));
	return (0);
}*/
