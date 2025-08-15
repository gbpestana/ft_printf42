/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:44:44 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/11 14:31:54 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_baseprintf(unsigned long nbr, int b, char flag)
{
	int				count;
	char			*low_hex;
	char			*hig_hex;

	count = 0;
	low_hex = "0123456789abcdef";
	hig_hex = "0123456789ABCDEF";
	if (nbr >= (unsigned long)b)
		count += ft_putnbr_baseprintf((nbr / b), b, flag);
	if (flag == 'X')
		count += ft_putchar_printf(hig_hex[nbr % b]);
	else
		count += ft_putchar_printf(low_hex[nbr % b]);
	return (count);
}

int	ft_putnbr_base(int n, char flag)
{
	int				count;
	int				base;
	unsigned long	nbr;

	count = 0;
	if (flag == 'x' || flag == 'X')
		base = 16;
	else
		base = 10;
	if (n < 0 && base == 10)
	{
		if (flag != 'u')
			count += ft_putchar_printf('-');
		nbr = -(unsigned long)n;
	}
	else
		nbr = (unsigned long)n;
	return (count += ft_putnbr_baseprintf(nbr, base, flag));
}
