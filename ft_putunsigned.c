/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husaltam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 17:03:46 by husaltam          #+#    #+#             */
/*   Updated: 2025/01/12 18:38:37 by husaltam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	char	buffer[11];
	int		i;
	int		len;

	i = 10;
	len = 0;
	buffer[i--] = '\0';
	if (n == 0)
		buffer[i--] = '0';
	while (n > 0)
	{
		buffer[i--] = '0' + (n % 10);
		n /= 10;
	}
	len += ft_putstr(&buffer[i + 1]);
	return (len);
}
