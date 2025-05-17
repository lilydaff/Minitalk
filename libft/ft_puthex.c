/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:44:00 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/10 20:33:14 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	taille_voulue(unsigned int nb)
{
	unsigned int	out;

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

int	ft_puthex(va_list arg)
{
	char			*base;
	char			*temp;
	int				r;
	int				i;
	unsigned int	k;

	k = va_arg(arg, unsigned int);
	base = "0123456789abcdef";
	i = taille_voulue(k);
	if (k == 0)
		return (write(1, "0", 1));
	temp = malloc((i + 1) * sizeof(char));
	if (!temp)
		return (0);
	temp[i] = '\0';
	while (k > 0)
	{
		r = k % 16;
		k = k / 16;
		temp[i - 1] = base[r];
		i--;
	}
	i = ft_strlen(ft_putstr(temp));
	free(temp);
	return (i);
}
