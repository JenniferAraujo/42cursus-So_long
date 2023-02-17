/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:59:16 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/14 15:38:30 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIÇÃO: lstlast() retorna o último elemento da lista.
*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*#include <stdio.h>

int	main()
{
	t_list *aux;
	t_list *segundo;
	t_list *terceiro;
	t_list *quarto;
	t_list *ultimo;

	aux = ft_lstnew("Um");
	segundo = ft_lstnew("Dois");
	terceiro = ft_lstnew("Tres");
	quarto = ft_lstnew("Quatro");

	aux->next = segundo;
	segundo->next = terceiro;
	terceiro->next = quarto;

	ultimo = ft_lstlast(aux);

	printf("O ultimo t_list e %s e tem pointer de %p \n",
						(char *)ultimo->content, ultimo->next);
}*/
