/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:18:25 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/07 15:26:01 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar_printf(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr_printf(char *s)
{
	int	count;

	count = 0;
	while (*s)
		count += ft_putchar_printf((int)*s++);
	return (count);
}

int	ft_preputnbr(int n, char c)
{
	unsigned int	nbr;
	int				base;
	int				count;

	count = 0;
	if (c == 'x' || c == 'X' || c == 'p')
	{
		base = 16;
		if (c == 'p')
			count += ft_putstr_printf("0x");
	}
	else
		base = 10;
	if (n < 0)
	{
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
	if (nbr >= b)
		ft_putnbr_base((nbr / b), b, c);
	if (c == 'X')
		count += ft_putchar_printf(hex_up[nbr % b]);
	else
		count += ft_putchar_printf(hex_lo[nbr % b]);
	return (count);
}
