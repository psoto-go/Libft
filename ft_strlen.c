/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:22:00 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/24 13:32:25 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s){
    size_t count;

    count = 0;
    while(s[count] != '\0'){
        count++;
    }
    return count;
}

int main(int argc, char **argv){
    printf("%lu\n", ft_strlen("holaholaaaaa\n\0"));
    printf("%lu", strlen("holaholaaaaa\n\0"));
}