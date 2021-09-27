/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 13:45:38 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/24 14:35:53 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t l){
	unsigned char	*temp;
	size_t			count;

	count = 0;
	temp = str;
	while (count < l)
	{
		temp[count] = c;
		count++;
	}
    printf("%s",str);
	// return (str);
}
int main(int argc, char **argv){
    // printf("%s\n", ft_memset("holaholaaaaa", 1, 2));
    // printf("%s", memset("holaholaaaaa", 1, 2));
    ft_memset("aaa",'$', 2);
}