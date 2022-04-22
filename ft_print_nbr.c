/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:47:55 by shafsi            #+#    #+#             */
/*   Updated: 2022/01/20 18:50:34 by shafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	count_nbr(int nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

int	ft_print_nbr(int nb)
{
	long	nbr;
	int		l;

	nbr = nb;
	l = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_print_char('-');
		l++;
	}
	if (nbr < 10)
		ft_print_char(nbr + '0');
	else
	{
		ft_print_nbr(nbr / 10);
		ft_print_nbr(nbr % 10);
	}
	return (count_nbr(nbr) + l);
}
