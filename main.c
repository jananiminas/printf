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
	ft_printf("Char: %c\n", 'J');
	ft_printf("String: %s\n", "Timeline");
	ft_printf("Decimal: %d\n", -123);
	ft_printf("Unsigned: %u\n", 123456789);
	ft_printf("Hex (lower): %x\n", 64206);		/* Decimal 64206 = Hexadecimal face */
	ft_printf("Hex (upper): %X\n", 64206); 
	ft_printf("Pointer: %p\n", (void *)0x1234abcd);
	ft_printf("Percent sign: %%\n");
	return 0;
}

// output

// Char: J
// String: Timeline
// Decimal: -123
// Unsigned: 123456789
// Hex (lower): face
// Hex (upper): FACE
// Pointer: 0x1234abcd
// Percent sign: %
