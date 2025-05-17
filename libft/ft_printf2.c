/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:45:51 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/10 19:04:25 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf2(const char *text, va_list args)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (text[i] == 'c')
		count += ft_printf_char(args);
	if (text[i] == 's')
		count += ft_printf_string(args);
	if (text[i] == 'p')
		count += ft_pnthexa(args);
	if (text[i] == 'i' || text[i] == 'd')
		count += ft_printf_nbr(args);
	if (text[i] == 'x')
		count += ft_puthex(args);
	if (text[i] == 'X')
		count += ft_putcap_hex(args);
	if (text[i] == '%')
		count += write(1, &text[i], 1);
	if (text[i] == 'u')
		count += ft_putnbrbase(args);
	return (count);
}
