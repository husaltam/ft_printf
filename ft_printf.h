/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husaltam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:16:32 by husaltam          #+#    #+#             */
/*   Updated: 2025/01/12 18:37:34 by husaltam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

char	*ft_strcpy(char *dest, const char *src);
int		ft_printf(const char *format, ...);
int		ft_puthex(unsigned int n, int uppercase);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putptr(void *ptr);
int		ft_putstr(const char *str);
int		ft_putunsigned(unsigned int n);
int		handle_conversion(char specifier, va_list args);

#endif
