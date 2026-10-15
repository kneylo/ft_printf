/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 01:00:37 by nkreter           #+#    #+#             */
/*   Updated: 2026/10/15 03:04:51 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long n, char *base)
{
	int		count;
	int		res;

	count = 0;
	res = 0;
	if (n >= 16)
	{
		res = print_hex(n / 16, base);
		if (res == -1)
			return (-1);
		count += res;
	}
	res = print_c(base[n % 16]);
	if (res == -1)
		return (-1);
	return (count + res);
}
