/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pnthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:59:29 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/12 18:42:31 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// CONVERTIR TOUT EN HEXADECIMAL
// void * peut etre : un int une chaine de caracteres un char et?

// couvrir toutes les conversions en hexa?
// on a deja celle de int

static int	taille_voulue(unsigned long nb)
{
	int	out;

	out = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		out++;
		nb = nb / 16;
	}
	return (out);
}

static int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (s);
}

int	ft_pnthexa(va_list args)
{
	char			*base;
	char			*temp;
	int				i;
	unsigned long	k;

	k = va_arg(args, unsigned long);
	if (!k)
		return (write(1, "(nil)", 5));
	base = "0123456789abcdef";
	i = taille_voulue(k) + 2;
	temp = malloc((i + 1) * sizeof(char));
	if (!temp)
		return (0);
	temp[i] = '\0';
	while (k > 0)
	{
		temp[i - 1] = base[k % 16];
		k = k / 16;
		i--;
	}
	temp[0] = '0';
	temp[1] = 'x';
	i = ft_strlen(ft_putstr(temp));
	free(temp);
	return (i);
}
