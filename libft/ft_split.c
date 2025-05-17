/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:08:00 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/03 14:17:51 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	count;

	count = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char	**ft_free(char **tab, int i)
{
	while (i >= 0)
		free(tab[i--]);
	free(tab);
	return (NULL);
}

static int	ft_lens(char const *s, char c)
{
	int	len_word;

	len_word = 0;
	while (s[len_word] && s[len_word] != c)
		len_word++;
	return (len_word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		len_word;

	i = 0;
	len_word = 0;
	tab = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!tab || !s)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			len_word = ft_lens(s, c);
			tab[i] = ft_substr(s, 0, len_word);
			if (!tab[i])
				return (ft_free(tab, i));
			s = s + len_word;
			i++;
		}
	}
	tab[i] = NULL;
	return (tab);
}

/*int    main(void)
{
	char    str[29] = " bon jour quarante de ux";
	char    c = ' ';
	char    **tab = ft_split(str, c);
	int        i;

	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/