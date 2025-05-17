/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:41:48 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 11:02:41 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The	memmove(void)  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest.
La fonction memmove() copie n octets de la zone mémoire src vers la mémoire
zone dest.  Les zones mémoire peuvent se chevaucher : la copie s'effectue comsi
les octets de src sont d'abord copiés dans un tableau temporaire qui ne le fait
chevauchent src ou dest,
et les octets sont ensuite copiés à partir du fichier temporaire
tableau à destination.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!src && !dest)
		return (NULL);
	d = dest;
	s = src;
	if (s < d)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
		ft_memcpy(d, src, n);
	return (dest);
}

// int	main(void)
// {
// 	char dest[50];
// 	char *src = "lorem ipsum blabla";
// 	ft_memmove(dest, src, 8);
// 	printf("%s\n", dest);
// }