/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:44:27 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/10 19:08:14 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_string(va_list args)
{
	char	*s;
	int		i;
	int		count;

	s = va_arg(args, char *);
	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	count = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
		count++;
	}
	return (count);
}
