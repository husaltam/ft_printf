/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husaltam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:04:33 by husaltam          #+#    #+#             */
/*   Updated: 2025/01/12 18:38:59 by husaltam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_conversion(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (specifier == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (specifier == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	if (specifier == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	if (specifier == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	if (specifier == '%')
		return (ft_putchar('%'));
	return (0);
}
