/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:44:44 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/11 12:38:42 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_preputnbr(int n, char c)
{
	unsigned int	nbr;
	int				base;
	int				count;

	count = 0;
	if (c == 'x' || c == 'X')
		base = 16;
	else
		base = 10;
	if (n < 0)
	{
		if (c == 'i' || c == 'd')
			count += ft_putchar_printf('-');
		nbr = (unsigned int) -n;
	}
	else
		nbr = (unsigned int)n;
	return (count += ft_putnbr_base(nbr, base, c));
}

int	ft_putnbr_base(unsigned int nbr, int b, char c)
{
	char	*hex_lo;
	char	*hex_up;
	int		count;

	count = 0;
	hex_lo = "0123456789abcdef";
	hex_up = "0123456789ABCDEF";
	if (nbr >= (unsigned int)b)
		ft_putnbr_base((nbr / b), b, c);
	if (c == 'X')
		count += ft_putchar_printf(hex_up[nbr % b]);
	else
		count += ft_putchar_printf(hex_lo[nbr % b]);
	return (count);
}
