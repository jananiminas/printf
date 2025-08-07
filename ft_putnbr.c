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
	long	nb;
	int		len = 0;

	nb = n;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		len += ft_putnbr(nb / 10);
	len += ft_putchar((nb % 10) + '0');
	return (len);
}

int	ft_putptr(void *ptr)
{
	unsigned long	addr;
	int				len;

	if (!ptr)
		return (write(1, "(nil)", 5));
	addr = (unsigned long)ptr;
	len = write(1, "0x", 2);
	len += ft_putptr_hex(addr);
	return (len);
}

int	ft_putptr_hex(unsigned long n)
{
	char	*base = "0123456789abcdef";
	int		len = 0;

	if (n >= 16)
		len += ft_putptr_hex(n / 16);
	len += ft_putchar(base[n % 16]);
	return (len);
}
