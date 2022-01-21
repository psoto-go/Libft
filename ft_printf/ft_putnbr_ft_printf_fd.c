/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ft_printf_fd.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:25:15 by psoto-go          #+#    #+#             */
/*   Updated: 2021/12/21 21:25:19 by psoto-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_ft_printf_fd(int n, int fd, int *res)
{
	if (n > -2147483648 || n <= 2147483647)
	{
		if (n == -2147483648)
		{
			ft_putchar_ft_printf_fd('-', fd, res);
			ft_putchar_ft_printf_fd('2', fd, res);
			ft_putnbr_ft_printf_fd(147483648, fd, res);
		}
		else if (n >= 10)
		{
			ft_putnbr_ft_printf_fd(n / 10, fd, res);
			ft_putnbr_ft_printf_fd(n % 10, fd, res);
		}
		else if (n < 0)
		{
			n = -n;
			ft_putchar_ft_printf_fd('-', fd, res);
			ft_putnbr_ft_printf_fd(n, fd, res);
		}
		else
		{
			ft_putchar_ft_printf_fd(n + '0', fd, res);
		}
	}
}
