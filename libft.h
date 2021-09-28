/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:43:33 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/28 09:51:32 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

void		*ft_memset(void *str, int c, size_t l);

size_t		ft_strlen(const char *s);

char		*ft_strchr(const char *str, int c);

#endif