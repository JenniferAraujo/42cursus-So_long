/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:00:05 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/14 19:08:20 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIÇÃO: lstsize() conta o número de elementos em uma lista.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
	list = ft_lstnew("Testando, ");
	s1 = ft_lstnew("a função ");
	s2 = ft_lstnew("lstsize");
	list->next = s1;
	s1->next = s2;
	printf("%s\n\n", "Lista: ");
	print_list(list);
	printf("\n\n");
	printf("%s", "ft_lstsize = ");
	printf("%d\n", ft_lstsize(list));
	return(0);
}*/
