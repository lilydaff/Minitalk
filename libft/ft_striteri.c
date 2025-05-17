/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:26:07 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 16:07:07 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applique la fonction ’f’ à chaque caractère de la
chaîne de caractères transmise comme argument,
et en passant son index comme premier argument.
Chaque caractère est transmis par adresse à ’f’
afin d’être modifié si nécessaire.*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void	ft_toupper(unsigned int i, char *c)
// {
// 	i = 0;
// 	if (*c <= 'z' && *c >= 'a')
// 	{
// 		*c -= 32;
// 	}
// }

// int	main(void)
// {
// 	char *kk;

//     kk = "c une dinguerie de faire ca";
//     ft_striteri(kk, ft_toupper);
//     printf("%s", kk);
// }
