/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:41:45 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 16:41:57 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The  memcpy()  function  copies  n  bytes from memory area src
//to memory area dest.  The memory areas must not overlap.  Use mem‐
		move(3) if the memory areas do overlap.
*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
// il faut toujours que un void * retourne un truc
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	str1 = (unsigned char *)src;
	str2 = (unsigned char *)dest;
	while (i < n)
	{
		str2[i] = str1[i];
		i++;
	}
	if (dest == NULL || src == NULL)
		return (dest);
	return (dest);
}

// int	main(void)
// {
// 	char	*src;
// 	char	dest[50];

// 	src = "je suis un test";
// 	ft_memcpy(dest, src, 10);
// 	printf("%s\n", dest);
// }

/*char*  = 'j''e'' '
void*  = '0x6A'
*/