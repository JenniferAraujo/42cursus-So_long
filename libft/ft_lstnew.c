/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:59:56 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/11 12:59:59 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIÇÃO: lstnew() aloca (com malloc(3)) e retorna um novo elemento,
	ou seja, cria uma nova lista. A variável content é inicializada com o
	valor do parâmetro 'content', a variável 'next' é inicializada como NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *) malloc (sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*#include <stdio.h>

int	main()
{
	char	str[] = "testando a função lstnew";
	t_list	*tst;
	tst = ft_lstnew((void *)str);
	printf("\n%s\n", (char *)tst->content);
}*/
