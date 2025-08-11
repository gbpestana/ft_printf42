/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:44:44 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/11 13:26:01 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

static int	ft_putnbr_baseprintf(unsigned int nbr, int b, int flag)
{
	int				count;
	char			*low_hex;
	char			*hig_hex;

	count = 0;
	low_hex = "0123456789abcdef";
	hig_hex = "0123456789ABCDEF";
	if (nbr >= b)
		count += ft_putnbr_baseprintf((nbr / b), b, flag);
	if (flag == '7')
		count += ft_putchar_printf(hig_hex[nbr % b]);
	else
		count += ft_putchar_printf(low_hex[nbr % b]);
	return (count);
}


int	ft_putnbr_base(unsigned int n, int flag)
{
	int				count;
	int				base;
	unsigned int	nbr;

	count = 0;
	if (flag == '6' || flag == '7')
		base = 16;
	else
		base = 10;
	if (n < 0 && base == 10)
	{
		count += ft_putchar_printf('-');
		nbr = -n;
	}
	else
		nbr = n;
	return (count += ft_putnbr_baseprintf(nbr, base, flag));
}
