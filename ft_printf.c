/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:49:51 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/07 12:21:19 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_format(char flag, va_list arg)
{
	int count;

	count = 0;
	if (flag == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (flag == 'i')
		count += ft_putnbr_base(va_arg(arg, int), flag);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		total;
	va_list arg;

	va_start(arg, format);
	total = 0;
	while (*format)
	{
		if (*format == '%')
			total += ft_print_format(*(++format), arg);
		else
			write (1, format, 1);
		format++;
	}
	va_end (arg);
	return (total);
}

int	main()
{
	int size;
	char *ptr[10];

	//*ptr = 'mamao';
	size = ft_printf("Hello World: %c, %s, %i", "H", "Banana", 42);
}
