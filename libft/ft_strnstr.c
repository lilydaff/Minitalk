/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:44:13 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/03 15:48:44 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checker(const char *big, const char *little, int i, size_t len)
{
	int	j;

	j = 0;
	while (little[j])
	{
		if (big[i] != little[j])
			return (0);
		i++;
		j++;
	}
	if ((size_t)i > len)
		return (0);
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			if (checker(big, little, i, len) == 1)
				return ((char *)(big += i));
		}
		i++;
	}
	return (NULL);
}
