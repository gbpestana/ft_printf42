/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:49:51 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/11 14:41:24 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_select_print(char flag, va_list args)
{
	if (flag == 'c')
		return (ft_putchar_printf(va_arg(args, int)));
	else if (flag == 's')
		return (ft_putstr_printf(va_arg(args, char *)));
	else if (flag == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (flag == 'd' || flag == 'i')
		return (ft_putnbrbase_signed(va_arg(args, int), flag));
	else if (flag == 'u')
		return (ft_putnbrbase_unsigned(va_arg(args, unsigned int), flag));
	else if (flag == 'x' || flag == 'X')
		return (ft_putnbrbase_unsigned(va_arg(args, unsigned int), flag));
	else
		return (ft_putchar_printf('%'));
}

static int	ft_isvalid(char c)
{
	char	*valid;

	valid = "cspdiuxX%";
	while (*valid)
	{
		if (*valid++ == c)
			return (1);
	}
	return (0);
}

static int	ft_printf_format(const char *format, va_list arg)
{
	int	total;
	int	i;

	i = 0;
	total = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (ft_isvalid(format[i]))
				total += ft_select_print(format[i], arg);
			else
				return (total);
		}
		else
			total += ft_putchar_printf(format[i]);
		i++;
	}
	return (total);
}

int	ft_printf(const char *format, ...)
{
	int		total;
	va_list	arg;

	total = 0;
	if (!format)
		return (-1);
	if (*format == '\0')
		return (0);
	va_start(arg, format);
	total = ft_printf_format(format, arg);
	va_end(arg);
	return (total);
}
