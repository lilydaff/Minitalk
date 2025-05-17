/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:16:00 by hmessaou          #+#    #+#             */
/*   Updated: 2024/11/28 17:55:01 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// transforme un caractere minuscule en majuscule
#include "libft.h"

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		c -= 32;
	}
	return (c);
}

// int	main(void)
// {
// 	printf("%c", ft_toupper('j'));
// }