/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:18:13 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/07 15:05:37 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_input(char input, va_list args)
{
	if (input == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (input == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (input == 'd' || input == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (input == 'u')
		return (ft_put_unsigned(va_arg(args, unsigned int)));
	else if (input == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	else if (input == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	else if (input == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else if (input == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;
	int		printed;

	i = 0;
	printed = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1])
			printed += handle_input(input[++i], args);
		else
			printed += ft_putchar(input[i]);
		i++;
	}
	va_end(args);
	return (printed);
}

