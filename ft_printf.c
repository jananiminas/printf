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

static int	print_type(const char *input, void *arg)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += print_char((int)arg);
	else if (*input == 's')
		i += print_string((char *)arg);
	else if (*input == 'p')
		i += print_pointer((unsigned long)arg, 87);
	else if (*input == 'd')
		i += print_int((int)arg);
	else if (*input == 'i')
		i += print_int((int)arg);
	else if (*input == 'u')
		i += print_unsigned((unsigned int)arg);
	else if (*input == 'x')
		i += print_hex((unsigned int)arg, 87);
	else if (*input == 'X')
		i += print_hex((unsigned int)arg, 55);
	return (i);
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
			printed += print_type(input[++i], args);
		else
			printed += ft_putchar(input[i]);
		i++;
	}
	va_end(args);
	return (printed);
}
