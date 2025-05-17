/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 11:47:14 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/10 19:01:06 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *text, ...)
{
	va_list	args;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(args, text);
	while (text[i])
	{
		if (text[i] == '%')
		{
			i++;
			count += ft_printf2(text + i, args);
			i++;
		}
		else
		{
			write(1, &text[i], 1);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
// // cspdiuxX %
// # include <stdio.h>
// int	main(void)
// {
// 	int l1 = ft_printf("%d\n", -2147483648);
// 	int l2 = printf("%ld\n", -2147483648);
// 	printf("%d %d\n", l1, l2);
// }
// ft_printf("giahigahi %c gapj", 'a');
