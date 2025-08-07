/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:30:12 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/07 15:33:13 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include<unistd.h>
# include<stdarg.h>

int	ft_putchar_printf(int c);
int	ft_putstr_printf(char *s);
int	ft_preputnbr(int n, char c);
int	ft_putnbr_base(unsigned int nbr, int b, char c);

#endif