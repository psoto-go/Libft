/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 10:30:03 by psoto-go          #+#    #+#             */
/*   Updated: 2021/09/29 11:39:45 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	count;

	count = ft_strlen(str);
	while (count >= 0)
	{
		if (str[count] == (unsigned char)c)
			return (str + (count));
		count--;
	}
	return (0);
}
