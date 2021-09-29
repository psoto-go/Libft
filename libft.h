/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:43:33 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/29 14:11:00 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>

void		*ft_memset(void *str, int c, size_t l);

void		ft_bzero(void *s, size_t n);

size_t		ft_strlen(const char *s);

void		*ft_memmove(void *s1, const void *s2, size_t n);

void		*ft_memcpy(void *str1, const void *str2, size_t n);

char		*ft_strchr(const char *str, int c);

#endif