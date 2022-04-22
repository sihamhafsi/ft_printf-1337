/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:39:47 by shafsi            #+#    #+#             */
/*   Updated: 2022/01/20 18:50:55 by shafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	count_hexa(unsigned long long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 16;
		count++;
	}
	return (count);
}

int	ft_print_hexa(unsigned long long nbr, char c)
{
	char	*s;

	if (c == 'x')
		s = "0123456789abcdef";
	else if (c == 'X')
		s = "0123456789ABCDEF";
	if (nbr < 16)
		ft_print_char(s[nbr]);
	else
	{
		ft_print_hexa(nbr / 16, c);
		ft_print_hexa(nbr % 16, c);
	}
	return (count_hexa(nbr));
}
