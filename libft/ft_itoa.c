/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:41:36 by hmessaou          #+#    #+#             */
/*   Updated: 2024/11/28 18:19:10 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue (avec malloc(3)) et retourne une chaîne
de caractères représentant l’entier ’n’ reçu en
argument. Les nombres négatifs doivent être gérés.*/
#include "libft.h"

static int	ft_nbrlen(long int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	long	nbr;

	res = malloc(sizeof(char) * ft_nbrlen(n) + 1);
	if (!res)
		return (NULL);
	nbr = n;
	i = ft_nbrlen(n);
	res[i--] = '\0';
	if (nbr < 0)
	{
		nbr *= -1;
		res[0] = '-';
	}
	while (nbr > 9)
	{
		res[i] = (nbr % 10 + '0');
		nbr = nbr / 10;
		i--;
	}
	res[i] = nbr + '0';
	return (res);
}

// int main(void)
// {
//     printf("%s", ft_itoa(0));
// }