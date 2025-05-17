/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:41:40 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/04 15:08:53 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Recherche la première occurence d'une valeur typée int ,
// mais interprétée en tant que char , dans un bloc de mémoire.
// on commence par caster les caracteres pour pouvoir les
// comparer. De plus un void se caste la plupart du tenmps en unsigned char
// on leur assgigne un nouveau nom et une nouvelle valeur pour que on
// puisse les reutiliser plus tard sinon la condition
// nest vraie que durant cette ligne
// on recaste en void parcequon veut que ca nous retourne un void

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;
	unsigned char	cc;

	ss = (unsigned char *)s;
	cc = (unsigned char)c;
	i = -1;
	while (n > ++i)
		if (cc == ss[i])
			return ((void *)(&ss[i]));
	return (NULL);
}
// int main(void)
// {
//     char *test = "Je suis un test";
//     printf("%s\n", (char *)ft_memchr(test, 's',
//		15));//on caste en char dans le main
// }
