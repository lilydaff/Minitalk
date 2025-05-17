/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:06:16 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 11:26:39 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strdup renvoie un pointeur vers
// l'espace de stockage contenant la chaîne copiée.
// S'il ne peut pas réserver de mémoire, strdup renvoie NULL .
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*h;
	int		i;

	i = 0;
	h = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!h)
		return (NULL);
	while (s[i])
	{
		h[i] = s[i];
		i++;
	}
	h[i] = '\0';
	return (h);
}

// int main(void)
// {
//     printf("%s", ft_strdup("yafoyyyy"));
// }
