/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:18:25 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/02 19:09:34 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

void	ft_putnbr_base(int n, char c)
{
	unsigned int	nbr;
	unsigned int	base;
	char			*hex;

	hex = "0123456789abcdef";
	if (c == 'h')
		base = 16;
	else
		base = 10;
	if (n < 0)
	{
		ft_putchar('-');
		nbr = (unsigned int) -n;
	}
	else
		nbr = (unsigned int)n;
	if (nbr >= base)
		ft_putnbr_base((nbr/base), c);
	ft_putchar(hex[nbr % base]);
}
