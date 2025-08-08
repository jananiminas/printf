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
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	len;
	int	ret;

	if (!s)
		return (ft_putstr("(null)"));
	len = 0;
	while (*s)
	{
		ret = ft_putchar(*s++);
		if (ret == -1)
			return (-1);
		len += ret;
	}
	return (len);
}

int	ft_put_unsigned(unsigned int n)
{
	int	printed;
	int	temp;

	printed = 0;
	if (n >= 10)
	{
		temp = ft_put_unsigned(n / 10);
		if (temp == -1)
			return (-1);
		printed += temp;
	}
	temp = ft_putchar((n % 10) + '0');
	if (temp == -1)
		return (-1);
	printed += temp;
	return (printed);
}

int	ft_puthex(unsigned int n, int uppercase)
{
	char	*base;
	int		len;
	int		ret;

	if (uppercase == 1)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	len = 0;
	if (n >= 16)
	{
		ret = ft_puthex(n / 16, uppercase);
		if (ret == -1)
			return (-1);
		len += ret;
	}
	ret = ft_putchar(base[n % 16]);
	if (ret == -1)
		return (-1);
	len += ret;
	return (len);
}
