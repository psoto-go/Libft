/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:46:18 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/27 13:17:33 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n){
    unsigned char	*temp1;
    unsigned char	*temp2;
    size_t	count;

    temp1 = (unsigned char *)str1;
    temp2 = (unsigned char *)str2;
    count = 0;
	// if (str1 == NULL && str2 == NULL)
	// 	return (NULL);
    while(count < n){
		temp1[count] = temp2[count];
		count++;
    }
	return(str1);
}

int	main(int argc, char **argv){
	char tab[100] = "oldstring";
	char tab2[100] = "newstring";
	// char tab[100];
	// char tab2[10];

	printf("%s\n", ft_memcpy(tab, tab2, 9));
	printf("%s", memcpy(tab, tab2, 9));

}