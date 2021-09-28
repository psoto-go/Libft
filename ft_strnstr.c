/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:19:50 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/28 13:54:29 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len){
	
}

int	main(int argc, char **argv){
	char tab[100] = "oldstringwwww";
	char tab2[100] = "stringwwww";
	// char tab[100];
	// char tab2[10];

	// printf("%s\n", ft_strnstr(tab, tab2, 15));
	printf("%s", strnstr(tab, tab2, 15));

}