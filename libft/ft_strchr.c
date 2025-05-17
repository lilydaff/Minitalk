/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:42:11 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 13:17:34 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La strchr fonction recherche la première occurrence de c in str ,
// ou elle retourne NULL si c elle n'est pas trouvée.
// ON RENVOIE LA CHAINE A PARTIR DE C
// Le caractère Null de fin est inclus dans la recherche.
// faire s+i ecrit la chaine a partir de c
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "ton bigo il a la gangrene";

	printf("%s", ft_strchr((str), 'a'));
}
*/