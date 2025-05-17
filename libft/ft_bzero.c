/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:43:23 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 16:29:55 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The bzero() function erases the data in the n bytes of the memory
		starting at the location pointed to by s, by writing zeros (bytes
		containing '\0') to that area.
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
// int	main(void)
// {
// 	char str[] = "la fronce";
// 	ft_bzero(str, 3);
//        int i = 0;
//        while (i < 9)
//        {
//               printf("%c", str[i]);
//               i++;
//        }
// }