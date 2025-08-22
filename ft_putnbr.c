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
	long	num;
	int		printed;
	int		temp;

	printed = 0;
	num = n;
	if (num < 0)
	{
		printed = ft_putchar('-');
		if (printed == -1)
			return (-1);
		num = -num;
	}
	if (num >= 10)
	{
		temp = ft_putnbr(num / 10);
		if (temp == -1)
			return (-1);
		printed += temp;
	}
	temp = ft_putchar(num % 10 + '0');
	if (temp == -1)
		return (-1);
	printed += temp;
	return (printed);
}
