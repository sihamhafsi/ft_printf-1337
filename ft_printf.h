/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shafsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:03:08 by shafsi            #+#    #+#             */
/*   Updated: 2022/01/20 19:36:22 by shafsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_print_str(char	*str);
int	ft_print_nbr(int nb);
int	ft_print_char(char c);
int	ft_print_hexa(unsigned long long nbr, char c);
int	ft_print_unbr(unsigned int nb);
int	ft_print_adr(unsigned long long nb);
int	ft_printf(const char *format, ...);

#endif
