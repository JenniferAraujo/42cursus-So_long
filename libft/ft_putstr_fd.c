/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:18:04 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:28:53 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: putstr_fd() emite a string 's' para o descritor de arquivo fornecido.
*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*int	main()
{
	ft_putstr_fd("Jennifer", 1);
	return(0);
}*/
