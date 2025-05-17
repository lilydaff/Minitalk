/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:42:35 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 16:35:08 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue (avec malloc(3)) et retourne une chaîne de
caractères issue de la chaîne ’s’.
Cette nouvelle chaîne commence à l’index ’start’ et
a pour taille maximale ’len’.*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
int	main(void)
{
	char *str = "Hello, World!";

	char *dst = ft_substr(str, 7, 5);
	printf("Sous-chaîne extraite : '%s'\n", dst);
	free(dst);

	dst = ft_substr(str, 20, 5);
	printf("Sous-chaîne extraite : '%s'\n", dst);
	free(dst);

	dst = ft_substr(str, 0, 20);
	printf("Sous-chaîne extraite : '%s'\n", dst);
	free(dst);

	dst = ft_substr("", 0, 5);
	printf("Sous-chaîne extraite : '%s'\n", dst);
	free(dst);

	return (0);
}*/