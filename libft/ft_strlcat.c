/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:06:21 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 12:30:42 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// concatener ca veut dire ecrire lun a la suite de lautre
// Permet de concaténer 2 chaines de caractères. Elle va rajouter
// size caractères de la chaîne src à la fin de la chaîne dst
/*#include "libft.h"
size_t	ft_strlcat(char *s1, const char *s2, size_t n)
*///(ligne 36)ecris la chaine a partir de j + i donc longeur de src
// + 0 quiva ensite incrementer
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	unsigned int	i;
	unsigned long	j;
	unsigned long	l;

	i = 0;
	j = ft_strlen(dst);
	l = ft_strlen(src);
	if (siz <= j)
		return (siz + l);
	while (j + i < siz - 1 && src[i])
	{
		dst[j + i] = src[i];
		i++;
	}
	if (i + j < siz)
		dst[j + i] = '\0';
	return (j + l);
}

// int    main(void)
// {
//     char dst[100] = "12346789";
//     char src[100] = "ABC";
//     size_t result;
//     result = ft_strlcat(dst, src, 5);
//     printf("%s, %s, %zu\n", src, dst, result);
//     return (0);
// }