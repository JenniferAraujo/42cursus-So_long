/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:59:07 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/11 12:59:09 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIÇÃO: lstiter() itera a lista 'lst' e aplica a função 'f' ao conteúdo
	de cada elemento, ou seja, aplica a função ao conteúdo de todos os elementos
	da lista.
*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*#include <stdio.h>

void	f(void *test)
{
	char *a = " Tests ";
	ft_strlcpy(test, a, ft_strlen(a) + 1);
}

int		main()
{
	t_list *aux;
	t_list *no1;
	t_list *no2;
	t_list *no3;


	char *c1 = ft_strdup("Testing, ");
	char *c2 = ft_strdup("this, ");
	char *c3 = ft_strdup("function, ");
	char *c4 = ft_strdup("with list.");

	aux = ft_lstnew(c1);
	no1 = ft_lstnew(c2);
	no2 = ft_lstnew(c3);
	no3 = ft_lstnew(c4);

	ft_lstadd_back(&aux, no1);
	ft_lstadd_back(&aux, no2);
	ft_lstadd_back(&aux, no3);

	int size;
	size = ft_lstsize(aux);
	t_list *start;
	start = aux;

	for(int i = 0; i < size; i++)
	{
		printf("%s", (char *)aux->content);
		aux = aux->next;
	}

	aux = start;

	ft_lstiter(aux, f);
	printf("\n");

	for(int i = 0; i < size; i++)
	{
		printf("%s", (char *)aux->content);
		aux = aux->next;
	}


	return (0);
}*/
