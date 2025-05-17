/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:43:34 by hmessaou          #+#    #+#             */
/*   Updated: 2024/11/28 17:39:01 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// retourne 1 si cest un alpha et retourne 0 si non
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}

// int main (void)
// {
// 	printf("%d\n",
//ft_isalpha('p'));
// }
