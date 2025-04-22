/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husaltam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:04:14 by husaltam          #+#    #+#             */
/*   Updated: 2025/01/12 18:38:16 by husaltam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	addr;
	char			*digits;
	char			buffer[17];
	int				i;
	int				len;

	i = 16;
	len = 0;
	digits = "0123456789abcdef";
	if (!ptr)
		return (ft_putstr("(nil)"));
	addr = (unsigned long)ptr;
	buffer[i--] = '\0';
	while (addr > 0)
	{
		buffer[i--] = digits[addr % 16];
		addr /= 16;
	}
	len += ft_putstr("0x");
	len += ft_putstr(&buffer[i + 1]);
	return (len);
}
