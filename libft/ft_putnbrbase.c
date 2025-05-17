/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:38:46 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/10 20:28:56 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	countnb(unsigned int nb)
{
	int	len;

	if (nb == 0)
		return (1);
	len = 0;
	while (nb > 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putnbr_spe(unsigned int nb)
{
	if (nb > 9)
		ft_putnbr_spe(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	ft_putnbrbase(va_list args)
{
	unsigned int	c;

	c = va_arg(args, unsigned int);
	ft_putnbr_spe(c);
	return (countnb(c));
}
