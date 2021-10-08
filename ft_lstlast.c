/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:22:39 by psoto-go          #+#    #+#             */
/*   Updated: 2021/10/08 17:05:36 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		count;
	int		len;

	count = 0;
	len = ft_lstsize(lst);
	while (count < (len - 1))
	{
		lst = lst->next;
		count++;
	}
	return (lst);
}
