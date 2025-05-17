/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:42:25 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 16:35:45 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// /*Applique la fonction ’f’ à chaque caractère de
// la chaîne de caractères ’s’, passant son index
// comme premier argument et le caractère lui-même
// comme second argument. Une nouvelle chaîne de
// caractères est créée (avec malloc(3)), résultant
// des applications successives de ’f’ sur 's'.*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*h;

	i = 0;
	h = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!h)
		return (NULL);
	while (s[i])
	{
		h[i] = f(i, s[i]);
		i++;
	}
	h[i] = '\0';
	return (h);
}

// static char	sft_toupper(char c)
// {
// 	int i;

// 	i = 0;
// 	if (c <= 'z' && c >= 'a')
// 	{
// 		c -= 32;
// 	}
// 	return (c);
// }

// int	main(void)
// {
//     printf("%s", ft_strmapi("fUFYfyfUYF", &sft_toupper));
// }