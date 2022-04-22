/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:55:38 by shafsi            #+#    #+#             */
/*   Updated: 2022/01/20 18:58:37 by shafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	count_unbr(unsigned int nbr)
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

int	ft_print_unbr(unsigned int nbr)
{
	if (nbr < 10)
		ft_print_char(nbr + '0');
	else
	{
		ft_print_nbr(nbr / 10);
		ft_print_nbr(nbr % 10);
	}
	return (count_unbr(nbr));
}
