/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husaltam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:03:29 by husaltam          #+#    #+#             */
/*   Updated: 2025/01/12 18:37:59 by husaltam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	buffer[12];
	long	num;
	int		i;	
	int		len;

	i = 11;
	num = n;
	len = 0;
	buffer[i--] = '\0';
	if (num < 0)
	{
		num = -num;
		len += ft_putchar('-');
	}
	if (num == 0)
		buffer[i--] = '0';
	while (num > 0)
	{
		buffer[i--] = '0' + (num % 10);
		num /= 10;
	}
	len += ft_putstr(&buffer[i + 1]);
	return (len);
}
