/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaa-s <jaa-s@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 15:52:21 by jaa-s             #+#    #+#             */
/*   Updated: 2025/08/08 15:52:44 by jaa-s            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putptr(void *ptr)
{
	unsigned long	address;
	int				printed;

	if (!ptr)
		return (ft_putstr("0x0"));
	printed = ft_putstr("0x");
	if (printed == -1)
		return (-1);
	address = (unsigned long)ptr;
	return (printed + ft_putptr_hex(address));
}

int	ft_putptr_hex(unsigned long n)
{
	int		printed;
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		printed = ft_putptr_hex(n / 16);
		if (printed == -1)
			return (-1);
		n = n % 16;
		return (printed + ft_putchar(base[n]));
	}
	return (ft_putchar(base[n]));
}
