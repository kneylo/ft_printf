/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:08:09 by nkreter           #+#    #+#             */
/*   Updated: 2026/10/13 01:12:18 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
# include <stdarg.h>

# define HEX_L "0123456789abcdef"
# define HEX_H "0123456789ABCDEF"
 
int	ft_printf(const char *str, ...);
int	print_c(char c);
int	print_s(char *str);
int	print_p(void *p);
int	print_di(int n);
int	print_u(unsigned int n);
int	print_hex(unsigned long n, char *base);

#endif