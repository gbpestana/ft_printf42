/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:18:25 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/11 14:06:18 by grodrig2         ###   ########.fr       */
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
		return (count += ft_putstr_printf("(null)"));
	while (*s)
		count += ft_putchar_printf((int)*s++);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	ptr_print;

	count = 0;
	if (!ptr)
		return (count += ft_putstr_printf("(nil)"));
	count += ft_putstr_printf("0x");
	ptr_print = (unsigned long)ptr;
	count += ft_putnbr_base(ptr_print, 6);
	return (count);
}
