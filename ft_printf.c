/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:49:51 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/11 13:28:16 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_select_print(int flag, va_list args)
{
	if (flag == '0')
		return (ft_putchar_printf(va_arg(args, int)));
	else if (flag == '1')
		return (ft_putstr_printf(va_arg(args, char *)));
	else if (flag == '2')
		return (ft_putptr((unsigned long)va_arg(args, void *)));
	else if (flag == '3' || flag == '4')
		return (ft_putnbr_base(va_arg(args, unsigned int), flag));
	else if (flag == '5')
		return (ft_putnbr_base(va_arg(args, unsigned int), flag));
	else if (flag == '6' || flag == '7')
		return (ft_putnbr_base(va_arg(args, unsigned int), flag));
	else
		return (ft_putchar_printf('%'));
}

static int	ft_isvalid(char c)
{
	int	i;
	char *valid;

	i = 0;
	valid = "cspdiuxX%";
	while (valid[i])
	{
		if (valid[i] == c)
			return (i);
		i++;
	}
	return (0);
}

static int	ft_printf_format(const char *format, va_list arg)
{
	int	total;
	int	i;
	int b;

	i = 0;
	total = 0;
	b = 9;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			b = ft_isvalid(format[i]);
			if (b >= 0 || b <= 8)
				total += ft_selectprint(b, arg);
			else
				return (0);
		}
		total += ft_putchar_printf(format[i]);
		i++;
	}
	return (total);
}

int	ft_printf(const char *format, ...)
{
	int total;
	va_list arg;

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
