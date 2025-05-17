/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:43:18 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/04 15:27:01 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// // The memcmp() function compares byte string s1 against byte string s2.
// Both strings are assumed to be n bytes long.
// // The memcmp() function returns an integer less than, equal to,
// 	or greater than zero if the first n bytes of s1 is found, respectively,
// 	to be less than, to match, or be greater than the first n bytes of s2.

// //        For a nonzero return value,
// 	the sign is determined by the sign of the difference between
// the first pair of bytes (interpreted as unsigned char) that
// differ in s1 and s2.

// //        If n is zero, the return value is zero.
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*y;
	const unsigned char	*z;

	y = (const unsigned char *)s1;
	z = (const unsigned char *)s2;
	i = -1;
	while (++i < n)
		if (y[i] != z[i])
			return (y[i] - z[i]);
	return (0);
}

// int	main(void)
// {
// 	const char	*s1 = "mama";
// 	const char	*s2 = "mamA";

// 	printf("%d", ft_memcmp(s2, s1, 10));
// 	printf("\n%d", memcmp(s2, s1, 10));
// }
