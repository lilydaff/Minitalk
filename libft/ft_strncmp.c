/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:06:34 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 13:25:49 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La fonction strcmp() compare les deux chaînes s1 et s2.
// Elle renvoie un entier négatif,
// nul, ou positif, si s1 est respectivement inférieure,
//égale ou supérieure à s2.
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((n > i && ((s1[i]) || s2[i])))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	s1 = "hello1";
// 	s2 = "hello";
// 	ft_strncmp(s1, s2, 5);
// 	printf("%d", ft_strncmp(s1, s2, 5));
// }