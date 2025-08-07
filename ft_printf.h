/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:30:12 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/07 16:12:03 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdarg.h>

int	ft_print_format(char flag, va_list arg);
int	ft_printf(const char *format, ...);
int	ft_putchar_printf(int c);
int	ft_putstr_printf(char *s);
int	ft_preputnbr(int n, char c);
int	ft_putnbr_base(unsigned int nbr, int b, char c);

#endif