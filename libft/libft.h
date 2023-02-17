/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <jede-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:56:09 by jede-ara          #+#    #+#             */
/*   Updated: 2022/11/11 12:56:48 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/*
***************************************************************************
				HEADERS
*/	
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>
# include <limits.h>
# include <fcntl.h>
/*
***************************************************************************
			PART 1 - LIBC FUNCTIONS
*/
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
void		ft_bzero(void *s, size_t n);
void		*ft_memset(void *a, int c, size_t len);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
size_t		ft_strlen(const char *str);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strdup(const char *src);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *str);
void		*ft_calloc(size_t count, size_t size);

/*
*****************************************************************************
			PART 2 - ADDITIONAL FUNCTIONS
*/

char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

/*
********************************************************************************
				BONUS PART
*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list		*ft_lstnew(void *content);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));


/*
***********************************************************************************
				GET NEXT LINE 
*/
char	*ft_read(int fd, char *src);
char	*get_next_line(int fd);
char	*ft_chr(char *s1, int c);
char	*ft_join(char *s, char *buff);
char	*ft_get_line(char *c);
char	*ft_new_line(char *s);

/*
**************************************************************************************
					PRINTF
*/
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_print_hex(unsigned int n, int c);
int	ft_print_pointer(unsigned long long ptr);
int	ft_print_unsig(unsigned int n, int fd);
int	ft_putnbr(int n);
int	ft_printf(const char *format, ...);

#endif
