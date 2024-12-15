/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:20:29 by sfelici           #+#    #+#             */
/*   Updated: 2024/12/10 19:20:31 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
#include <stdint.h>


// MANDATORY
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	ft_bzero(void *s, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void    *ft_memset(void *b, int c, size_t len);
void	*ft_memmove (void *dest, const void *src, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t count);
int	ft_strncmp(const char *s1, const char *s2, size_t count);
void	*ft_memchr(const void *buf, int c, size_t count);
int	ft_memcmp(const void *buf1, const void *buf2, size_t count);
char	*ft_strnstr(const char *big,	const char *little, size_t len);
void	*ft_calloc(size_t nitems, size_t size);
char	*ft_strdup(const char *string);

// ADDITIONAL
char	*ft_itoa(int n);

#endif
