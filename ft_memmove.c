/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:00:31 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/29 13:59:42 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t count;

	count = 0;
	if (!s1 || !s2)
		return (NULL);
	while (count < n)
	{
		(((unsigned char *)s1)[count] = ((unsigned char *)s2)[count]);
		count++;
	}
	return (s1);
}

// int main(int argc, char **argv)
// {
// 	char tab[] = "oldschool";
// 	char tab2[] = "newstringsss";

// 	printf("%s\n", ft_memmove(tab, tab2, 3));
// 	printf("%s", memmove(tab, tab2, 3));
// }
