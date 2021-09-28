/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:08:44 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/28 12:17:23 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t count;

	count = 0;

	while(str1[count] && str2[count] && count < n)
	{
		if(str1[count] != str2[count])
			return(str1[count] - str2[count]);
		count++;
	}
	if(count < n)
		return(str1[count] - str2[count]);
	return(0);
}
