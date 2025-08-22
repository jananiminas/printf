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

#include <stdio.h>

int  main()
{
	char *str = "0";  int cnt;
	ft_printf("hello,%c am %s,the address of %p,unsigned %u, %d,%i,%x,%X 100%%\n",'I',"allu",str,123,4,6, 'a','M');
	cnt= printf("hello,%c am %s,the address of %p,unsigned %u, %d,%i,%x,%X 100%%\n",'I',"allu",str,123,4,6, 'a','M');
	printf("%d",cnt);
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

// hello,I am allu,the address of 0x1013b4f2e,unsigned 123, 4,6,61,4D 100%
// hello,I am allu,the address of 0x1013b4f2e,unsigned 123, 4,6,61,4D 100%
// 72%
