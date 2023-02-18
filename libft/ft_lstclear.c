/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:58:43 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/14 19:24:48 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIÇÃO: lstclear() exclui e libera o elemento fornecido e todos os 
	sucessores desse elemento, usando a função 'del' e free(3). Finalmente,
	o ponteiro para a lista deve ser definido como NULL.
*/
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*j;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		j = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = j;
	}
	*lst = 0;
}

/*#include <stdio.h>

void	del(void *este)
{
 	free (este);
}

int		main()
{
	t_list *aux;
	t_list *no1;
	t_list *no2;
	t_list *no3;

	char *c1 = ft_strdup("     1 - ");
    char *c2 = ft_strdup("   2 - ");
    char *c3 = ft_strdup("   3 - ");
    char *c4 = ft_strdup("      4");

	aux = ft_lstnew(c1);
	no1 = ft_lstnew(c2);
	no2 = ft_lstnew(c3);
	no3 = ft_lstnew(c4);

	ft_lstadd_back(&aux, no1);
	ft_lstadd_back(&aux, no2);
	ft_lstadd_back(&aux, no3);

	printf("\n%s	    %s	%s	    %s\n", (char *)aux->content,
										(char *)aux->next->content,
										(char *)aux->next->next->content,
										(char *)aux->next->next->next->content);
	printf("%p %p %p %p %p\n", aux, aux->next, aux->next->next,
										aux->next->next->next,
										aux->next->next->next->next);

	ft_lstclear(&aux, del);

	printf("\n%p\n", aux);

	return (0);
}*/