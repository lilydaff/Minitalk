/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:43:27 by hmessaou          #+#    #+#             */
/*   Updated: 2024/11/29 18:12:17 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cette fonction alloue un bloc de mémoire
// en initialisant tous ces octets à la valeur 0.
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		i;
	char	*kiki;

	if ((nmemb * size) > 2147483647)
		return (NULL);
	kiki = (malloc(nmemb * size));
	if (!kiki)
		return (NULL);
	if (nmemb * size == 0)
		return (kiki);
	i = 0;
	while ((unsigned int)i < ((nmemb * size)))
	{
		kiki[i++] = '\0';
	}
	return (kiki);
}

// int	main(void)
// {
// 	printf("%s", (char *)ft_calloc(15962, 654974651));
// }
