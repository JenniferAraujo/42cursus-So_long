/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:58:30 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/14 14:08:59 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIÇÃO: lstadd() adiciona o elemento 'novo' no final da lista.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*#include <stdio.h>

int		main()
{
	t_list *j;
	if(!(j = malloc(sizeof(t_list))))
		return 0;

	j->content = (char *)"hey";
	j->next = NULL;

	t_list *new;
	if(!(new = malloc(sizeof(t_list))))
		return 0;

	new->content = (char *)"bye";
	new->next = NULL;

	printf("\nJ-> %s\n", (char *)j->content);

	ft_lstadd_front(&j, new);

	printf("J -> %s\n", (char *)j->content);
}*/
