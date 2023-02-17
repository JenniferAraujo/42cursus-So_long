/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:19:12 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:26:42 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIÇÃO: calloc() aloca a memória solicitada e retorna um ponteiro para ela. 
	A diferença em malloc e calloc é que malloc não define a memória como zero,
	enquanto calloc define a memória alocada como zero.
*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * count;
	if (count != 0 && (tot_size / count) != size)
		return (0);
	dst = malloc(size * count);
	if (!dst)
		return (0);
	ft_bzero(dst, count * size);
	return (dst);
}

/*#include <stdlib.h>
#include <unistd.h>
int		main(int argc, const char *argv[])
{
	char	*str;

	alarm(5);
	if (argc == 1)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		str = (char *)ft_calloc(30, sizeof(char));
		if (!str)
			write(1, "NULL", 4);
		else
			write(1, str, 30);
		free(str);
	}
	return (0);
}*/
