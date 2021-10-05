/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:38:59 by psoto-go          #+#    #+#             */
/*   Updated: 2021/10/05 13:22:13 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*aux;
	unsigned int	count;

	aux = malloc(len + 1);
	count = 0;
	if (!s || !aux)
		return (NULL);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	i = start;
	while (count < (unsigned int)len && s[i])
	{
		aux[count] = s[i];
		count++;
		i++;
	}
	aux[count] = '\0';
	return (aux);
}
