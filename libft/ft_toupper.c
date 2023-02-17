/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:48:49 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:31:17 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: toupper() converte letras minúsculas em maiúsculas.
	
*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -('a' - 'A'));
	return (c);
}

/*int	main()
{
	int	c;
	
	c = 'a';
	printf("%c", ft_toupper(c));
}*/
