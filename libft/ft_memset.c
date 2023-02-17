/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:19:19 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:28:32 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: memset() copia o catactere c para os primeiros n caracteres da
	string apontada pelo argumento str.
*/
#include "libft.h"

void	*ft_memset(void *a, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)a)[i] = c;
		i++;
	}
	return (a);
}

/*#include <stddef.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000] = "JenniferOLIVEIRA174638292028";
	void *a = s; 
	int c = 1; 
	size_t len = 1;
	printf("Testando o ft_memset() %p",ft_memset(a,c,len));
}*/