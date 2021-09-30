/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:43:33 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/30 12:21:14 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int			ft_isalpha(int c);

int			ft_isdigit(int c);

int			ft_isalnum(int c);

int			ft_isascii(int c);

int			ft_isprint(int c);

size_t		ft_strlen(const char *s);

void		*ft_memset(void *str, int c, size_t l);

void		ft_bzero(void *s, size_t n);

void		*ft_memcpy(void *str1, const void *str2, size_t n);

void		*ft_memmove(void *s1, const void *s2, size_t n);

size_t		ft_strlcpy(char *destination, const char *source, size_t size);

size_t		ft_strlcat(char *dest, const char *src, size_t size);

int			ft_toupper(int ch);

int			ft_tolower(int ch);

char		*ft_strchr(const char *str, int c);

char		*ft_strrchr(const char *str, int c);

int			ft_strncmp(const char *str1, const char *str2, size_t n);

void		*ft_memchr(const void *str, int c, size_t n);

int			ft_memcmp(const void *s1, const void *s2, size_t n);

char		*ft_strnstr(const char *haystack, const char *needle, size_t len);

int			ft_atoi(const char *str);

#endif