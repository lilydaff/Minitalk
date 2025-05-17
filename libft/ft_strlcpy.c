/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:06:24 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 12:22:40 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La fonction strlcpy permet de copier
//une chaîne de caractères dans une autre 
//chaîne en limitant le nombre de caractères copiés.
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;

	i = 0;
	while (src[i] && siz > i + 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (siz)
		dst[i] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char src[] = "je veux dormir";
// 	char dest[] = "jai besoin de";
// 	printf("%zu", ft_strlcpy(src, dest, 10));
// }