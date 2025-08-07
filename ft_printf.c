/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:49:51 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/07 16:11:44 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_format(char flag, va_list arg)
{
	if (flag == 'c')
		return (ft_putchar_printf(va_arg(arg, int)));
	else if (flag == 's')
		return (ft_putstr_printf(va_arg(arg, char *)));
	else if (flag == 'i')
		return (ft_preputnbr(va_arg(arg, int), flag));
	else if (flag == 'x' || flag == 'X')
		return (ft_preputnbr(va_arg(arg, int), flag));
	else if (flag == 'p')
		return (ft_preputnbr((unsigned long)va_arg(arg, int), flag));
	else if (flag == '%')
		return (ft_putchar_printf('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		total;
	va_list	arg;

	va_start(arg, format);
	total = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format)
			total += ft_print_format(*format, arg);
		}
		else
			total += write (1, format, 1);
		format++;
	}
	va_end (arg);
	return (total);
}

// int	main()
// {
// 	int size;
// 	char *ptr;

// 	ptr = "mamao";
// 	size = ft_printf("Hello World: %c, %s,
//%i, %%, %p, %x, %X \n", 'H', ptr, 42, &ptr, 42, 42);
// }
