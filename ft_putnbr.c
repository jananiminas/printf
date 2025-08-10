/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:04:23 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/07 15:04:24 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	printed;
	int	temp;

	printed = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		printed = ft_putchar('-');
		if (printed == -1)
			return (-1);
		n = -n;
	}
	if (n >= 10)
	{
		temp = ft_putnbr(n / 10);
		if (temp == -1)
			return (-1);
		printed += temp;
	}
	temp = ft_putchar(n % 10 + '0');
	if (temp == -1)
		return (-1);
	printed += temp;
	return (printed);
}

