/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:11:51 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/27 11:45:49 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(int *s, size_t n){
	ft_memset(s, 0, n);
}
// int main(int argc, char **argv){
// 	char tab[100];
//     printf("%s\n", ft_bzero(tab,2));
//     printf("%s", bzero(tab, 2));
// }