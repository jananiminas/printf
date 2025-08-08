/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 15:16:56 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/07 15:17:10 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	ft_printf("Char: %c\n", 'A');
	ft_printf("String: %s\n", "42AbuDhabi");
	ft_printf("Decimal: %d\n", -123);
	ft_printf("Unsigned: %u\n", 123456789);
	ft_printf("Hex (lower): %x\n", 48879);
	ft_printf("Hex (upper): %X\n", 48879);
	ft_printf("Pointer: %p\n", (void *)0x1234abcd);
	ft_printf("Percent sign: %%\n");
	return 0;
}
