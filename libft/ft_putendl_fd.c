/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:42:00 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 11:36:58 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ecrit la chaine de caractere â€™sâ€™ sur le
descripteur de fichier donnÃ© suivie dâ€™un retour Ã 
la ligne.*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
// int main(void)
// {
//     ft_putendl_fd("cacapipi", 2);
// }