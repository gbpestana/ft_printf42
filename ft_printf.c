/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:49:51 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/06 17:10:58 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	int		total;
	va_list arg;

	va_start(arg, format);
	total = 0;
	while (*format)
	{
		if (*format == '%')
		{
			print_format(*(++format), arg);
		}
	}

	va_end (arg);
}
