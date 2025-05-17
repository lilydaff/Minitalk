/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:41:51 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 16:19:56 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction permet de remplir une zone mémoire,
identifiée par son adresse et sa taille,
avec une valeur précise.//soit ca returnera 0 soit la chaine
void * cest la zone memoire, int c cest avec quoi on va remplir
la zone et n cest le nombre limite de la taille de la zone
void *s va etre caste en chaine
int c va	devenir(caster) un caractere
size t (il peut etre que positif)
caster sert a pouvoir utiliser en convertissant un type de variable a une autre
void peut se caster en tout cest un metamorph*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)

{
	unsigned char	*str;
	size_t			i;

	str = s;
	if (n == 0)
		return (s);
	str = (unsigned char *)s;
	i = 0;
	while (i <= n - 1)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[] = "hajar c detraquee une bizarre";
// 	char	str2[] = "hajar c detraquee une bizarre";

// 	ft_memset(str, '-', 24);
// 	ft_memset(str2, '-', 24);
// 	printf("%s, \n%s \n", str, str2);
// }
