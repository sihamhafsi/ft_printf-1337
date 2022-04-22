/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:59:24 by shafsi            #+#    #+#             */
/*   Updated: 2022/01/20 19:02:15 by shafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putexp(char c, va_list arg)
{
	if (c == 's')
		return (ft_print_str(va_arg(arg, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_nbr(va_arg(arg, int)));
	else if (c == 'c')
		return (ft_print_char(va_arg(arg, int)));
	else if (c == 'u')
		return (ft_print_unbr(va_arg(arg, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_print_hexa(va_arg(arg, unsigned int), c));
	else if (c == 'p')
		return (ft_print_adr(va_arg(arg, unsigned long long)));
	else
		return (write(1, &c, 1));
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break ;
			count += ft_putexp(format[i], arg);
		}
		else
			count += write (1, &format[i], 1);
		i++;
	}
	va_end(arg);
	return (count);
}
