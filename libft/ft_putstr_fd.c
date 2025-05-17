/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:42:06 by hmessaou          #+#    #+#             */
/*   Updated: 2024/11/28 17:59:15 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Écrit la chaîne de caractères ’s’ sur le
descripteur de fichier donné.*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
// int main (void)
// {
//     ft_putstr_fd("monkiki", 2);
// }