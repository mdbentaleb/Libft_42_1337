/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moben-ta <moben-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:38:23 by moben-ta          #+#    #+#             */
/*   Updated: 2024/10/28 15:39:01 by moben-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void 	*ft_memchr(const void *s, int c, size_t n);
void 	*ft_calloc(size_t count, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strdup(const char *s1);

#endif