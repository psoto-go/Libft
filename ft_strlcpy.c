/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:26:00 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/27 14:37:53 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *destination, const char *source, size_t size){
	unsigned int	count;
	unsigned int	output;
	
	output = 0;
	if (!destination && !source)
		return (output);
	while (source[output] != '\0')
		output++;
	if (size == 0)
		return (output);
	count = 0;
	while (source[count] != '\0' && count < (size - 1))
	{
		destination[count] = source[count];
		count++;
	}
	destination[count++] = '\0';
	return (output);

}
int main(int argc, char **argv){
    char src[10] = "coucou";
	char dest[10];

    printf("%s\n", ft_strlcpy(dest, src, 1));
    printf("%s\n", strlcpy(dest, src, 1));
}