/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:52:16 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/27 14:55:07 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int ch){
    if(ch >= 65 && ch <= 90)
		ch += 32;
    return ch;
}
int main(int argc, char **argv){
	char ch = 'E';
	
    printf("%c\n", ft_tolower(ch));
    printf("%c", tolower(ch));
}   