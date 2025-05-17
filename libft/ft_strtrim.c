/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:22:34 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/03 16:27:40 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_verifgad(char const *s1, char const *set)
{
	int		verif;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	verif = 1;
	while (verif > 0 && s1)
	{
		verif = 0;
		while (set[j])
		{
			if (s1[i] == set[j++])
			{
				verif++;
				i++;
			}
		}
		j = 0;
	}
	return (i);
}

static int	ft_verifdag(char const *s1, char const *set)
{
	int		verif;
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(s1) - 1;
	verif = 1;
	while (verif > 0 && s1)
	{
		verif = 0;
		while (set[j])
		{
			if (s1[i] == set[j++])
			{
				verif++;
				i--;
			}
		}
		j = 0;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		start;
	int		finish;
	char	*result;

	start = ft_verifgad(s1, set);
	finish = ft_verifdag(s1, set);
	i = 0;
	if (finish == -1)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	result = malloc(((finish - start + 1) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (start <= finish)
	{
		result[i++] = s1[start++];
	}
	result[i] = '\0';
	return (result);
}
