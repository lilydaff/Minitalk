/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 10:37:14 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/10 20:29:19 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putnbr(int nb);
int		ft_putcap_hex(va_list arg);
int		ft_puthex(va_list arg);
int		ft_printf2(const char *text, va_list args);
int		ft_printf_nbr(va_list args);
int		ft_printf_string(va_list args);
int		ft_pnthexa(va_list args);
int		ft_printf_char(va_list args);
int		ft_printf(const char *text, ...);
int		ft_putnbrbase(va_list args);

#endif