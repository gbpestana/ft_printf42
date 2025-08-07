/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:18:25 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/07 11:37:29 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(int c)
{
	int count;

	count = 0;
	count += write (1, &c, 1);
	return (count);
}

int	ft_putstr(char *s)
{
	int count;

	count = 0;
	while (*s)
		count += ft_putchar((int)*s++);
	return (count);
}

int	ft_putnbr_base(int n, char c)
{
	unsigned int	nbr;
	unsigned int	base;
	char			*hex;
	int 			count;

	count = 0;
	hex = "0123456789abcdef";
	if (c == 'x' || c == 'X' || c == 'p')
		base = 16;
		if(c == 'p')
			count += ft_putstr("0x");
	else
		base = 10;
	if (n < 0)
	{
		count += ft_putchar('-');
		nbr = (unsigned int) -n;
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= base)
		ft_putnbr_base((nbr/base), c);
	if (base == 'X')
		count += ft_putchar(hex[nbr % base] + 32);
	else
		count += ft_putchar(hex[nbr % base]);
	return (count);
}
