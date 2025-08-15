/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:30:12 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/11 14:07:34 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar_printf(int c);
int	ft_putstr_printf(char *s);
int	ft_putptr(void *ptr);
int	ft_putnbrbase_signed(long n, char flag);
int	ft_putnbrbase_unsigned(unsigned long n, char flag);

#endif