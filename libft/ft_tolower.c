/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:06:43 by hmessaou          #+#    #+#             */
/*   Updated: 2024/11/28 17:54:40 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// transforme un caractere majuscule en minuscule
#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		c += 32;
	}
	return (c);
}

// int	main(void)
// {
// 	printf("%c", ft_tolower('J'));
// }