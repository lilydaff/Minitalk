/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:44:24 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/10 19:01:00 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	countnb(int nb)
{
	int	len;

	if (nb == 0)
		return (1);
	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

int	ft_printf_nbr(va_list args)
{
	int	c;

	c = va_arg(args, int);
	ft_putnbr(c);
	if (c == -2147483648)
		return (11);
	return (countnb(c));
}
