/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husaltam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:03:59 by husaltam          #+#    #+#             */
/*   Updated: 2025/01/12 18:37:50 by husaltam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int uppercase)
{
	char	digits[17];
	char	buffer[9];
	int		i;
	int		len;

	i = 8;
	len = 0;
	if (uppercase)
		ft_strcpy(digits, "0123456789ABCDEF");
	else
		ft_strcpy(digits, "0123456789abcdef");
	buffer[i--] = '\0';
	if (n == 0)
		buffer[i--] = '0';
	while (n > 0)
	{
		buffer[i--] = digits[n % 16];
		n /= 16;
	}
	len += ft_putstr(&buffer[i + 1]);
	return (len);
}
