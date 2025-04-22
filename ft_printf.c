/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husaltam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:59:18 by husaltam          #+#    #+#             */
/*   Updated: 2025/02/07 13:24:27 by husaltam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		total_len;
	int		i;

	total_len = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			total_len += handle_conversion(format[i + 1], args);
			i++;
		}
		else
		{
			total_len += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (total_len);
}
