/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:50:47 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/23 18:45:46 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	DESCRIÇÃO: get_next_line() é um programa que retorna uma linha lida de um
    descritor de arquivo.
*/

#include "libft.h"

/* A função ft_read() irá ler nbytes de um file descrictor(fd) em um buffer
começando por buf.
Return: -1 se houver erro na leitura
0 se leu todo o arquivo e nao houver nova linha
1 se leu algo.*/
char	*ft_read(int fd, char *src)
{
	char	*buff;
	int		read_bts;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	read_bts = 1;
	while (!ft_chr(src, '\n') && read_bts != 0)
	{
		read_bts = read(fd, buff, BUFFER_SIZE);
		if (read_bts == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[read_bts] = '\0';
		src = ft_join(src, buff);
	}
	free(buff);
	return (src);
}

/* get_next_line() pega um descritor de arquivo aberto e retorna sua próxima
linha. Se for bem-sucedido, get_next_line retorna uma string com a linha
inteira terminando em uma quebra de linha ('\n') quando houver. Se ocorrer
um erro ou se não houver mais nada para ler, ele retorna NULL. */

char	*get_next_line(int fd)
{
	char		*line;
	static char	*s;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	s = ft_read(fd, s);
	if (!s)
		return (NULL);
	line = ft_get_line(s);
	s = ft_new_line(s);
	return (line);
}

/*int main(void)
{
	int		fd;
	char	*prt;
	int		i = 0;
	fd = open("1-brouette.txt", O_RDONLY);
	printf("fd = %d\n", fd);
	while (i < 80)
	{
		prt = get_next_line(fd);
		printf("%s", prt);
		free(prt);
		i++;
	}
	close(fd);
}*/

