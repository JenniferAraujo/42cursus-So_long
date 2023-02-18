/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:58:56 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/14 16:27:05 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIÇÃO: lstdelone() toma como parâmetro um elemento e libera a memória
	do conteúdo do elemento usando a função 'del' dada como parâmetro e libera 
	o elemento. A memória do 'próximo' não deve ser liberada. 
*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*#include <stdio.h>

void	del(void *abc)
{
	free (abc);
}

int		main()
{
	t_list *aux;
	t_list *segundo;
	t_list *terceiro;

	char *c1 = ft_strdup("Primeiro ");
    char *c2 = ft_strdup("Segundo ");
    char *c3 = ft_strdup("Terceiro ");

	aux = ft_lstnew(c1);
	segundo = ft_lstnew(c2);
	terceiro = ft_lstnew(c3);

	ft_lstadd_back(&aux, segundo);
	ft_lstadd_back(&aux, terceiro);

	printf("\n%s	    %s	  %s\n", (char *)aux->content, (char *)aux->next->content,
										(char *)aux->next->next->content);
	printf("%p %p %p %p\n", aux, aux->next, aux->next->next, aux->next->next->next);

	ft_lstdelone(aux, del);

	printf("\n%p\n", aux);

	return (0);
}*/
