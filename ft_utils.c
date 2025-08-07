/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:03:39 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/07 15:03:40 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int i = 0;

	if (!s)
		return (write(1, "(null)", 6));
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}

int	ft_put_unsigned(unsigned int n)
{
	int	len = 0;

	if (n >= 10)
		len += ft_put_unsigned(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}

int	ft_puthex(unsigned int n, int uppercase)
{
	char	*base;
	int		len = 0;

	base = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
	if (n >= 16)
		len += ft_puthex(n / 16, uppercase);
	len += ft_putchar(base[n % 16]);
	return (len);
}
