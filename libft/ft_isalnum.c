/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:25:05 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/08 14:26:48 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: isalnum() verifica se os caracteres são letras ou números. 
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*#include <stdio.h>
int	main()
{
	char	c;
	
	c = '$';
	if (ft_isalnum(c))
		printf("%c é um digito ou alfabeto\n", c);
	else
	printf("%c não é um digito ou alfabeto\n", c);
}*/
