/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:38:59 by grodrig2          #+#    #+#             */
/*   Updated: 2025/08/11 12:44:59 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nbr, int b, int flag)
{
	int		count;
	char	*low_hex;
	char	*hig_hex;
	

	count = 0;
	low_hex = "0123456789abcdef";
	hig_hex = "0123456789ABCDEF";
	if (nbr < 0 && b == 10)
	{
		count += ft_putchar_printf('-');
		nbr *= -1;
	}
}