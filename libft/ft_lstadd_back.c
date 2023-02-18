/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:58:17 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/14 19:14:20 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIÇÃO: Adiciona o elemento 'new' no final da lista. 
*/
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*j;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	j = ft_lstlast(*lst);
	j->next = new;
}

/*#include <stdio.h>

void	ft_putstr(char *s)
{
	int	i;
	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}
void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->content);
		list = list->next;
	}
}
int	main(void)
{
	t_list	*list;
	t_list	*s1;
	t_list	*s2;
	t_list	*new;
	list = ft_lstnew("Testing/ ");
	s1 = ft_lstnew("this/ ");
	s2 = ft_lstnew("function");
	new = ft_lstnew("/ this was add after!");
	list->next = s1;
	s1->next = s2;
	printf("%s\n", "Lista: ");
	print_list(list);
	printf("\n\n");
	ft_lstadd_back(&list, new);
	printf("%s\n", "ft_lstadd_back: ");
	print_list(list);
	return(0);
}*/
