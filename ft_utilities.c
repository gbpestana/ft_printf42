/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:18:25 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/07 16:58:36 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_printf(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr_printf(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (ft_putstr_printf("NULL"));
	while (*s)
		count += ft_putchar_printf((int)*s++);
	return (count);
}

int	ft_putptr(unsigned long n)
{
	int count;

	count = 0;
	if (!n)
		return (count += ft_putstr_printf("0x0"));
	count += ft_putstr_printf("0x");
	count += ft_putnbr_base(n, 16, 'x');
	return (count);
}
