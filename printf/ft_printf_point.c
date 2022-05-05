/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_point.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomak <acomak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:36:41 by acomak            #+#    #+#             */
/*   Updated: 2022/05/05 10:35:56 by acomak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(unsigned long long a)
{
	int	len;

	len = 0;
	while (a != 0)
	{
		a /= 16;
		len++;
	}
	return (len);
}

void	ft_put_hexx(unsigned long long n)
{
	if (n >= 16)
	{
		ft_put_hexx(n / 16);
		ft_put_hexx(n % 16);
	}
	else
	{
		if (n > 9)
			ft_putchar(n - 10 + 'a');
		else
			ft_putchar(n + 48);
	}
}

int	ft_print_ptr(unsigned long long n)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (n == 0)
		len += write(1, "0", 1);
	else
		ft_put_hexx(n);
	return (hex_len(n) + len);
}
