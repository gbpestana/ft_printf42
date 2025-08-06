/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 18:16:33 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/06 16:10:48 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include<unistd.h>
#include<stdlib.h>
#include<stdarg.h>

int		ft_printf(const char *, ...);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr_base(int n, char c);

#endif