/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:06:41 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 13:05:43 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// la fonction strrchr recherche
// la dernière occurrence
// de c (converti en char )
// dans str . La recherche inclut le caractère de NULL fin.
// Les arguments et la valeur de retour sont
// wcsrchr des chaînes à caractères larges.
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	if ((char)c == '\0')
		return ((char *)s + i + 1);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str[] = "ton bigo il a la gangrene";
// 	printf("%s", ft_strrchr((str), 'a'));
// }
// COMPILER SOUS CETTE FORME cc ft_strrchr ft_strlen