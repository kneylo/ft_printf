/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 01:00:39 by nkreter           #+#    #+#             */
/*   Updated: 2026/10/15 03:04:58 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(void *p)
{
	int	count;
	int	res;

	if (!p)
	{
		res = print_s("(nil)");
		if (res == -1)
			return (-1);
		return (res);
	}
	count = 0;
	res = print_s("0x");
	if (res == -1)
		return (-1);
	count += res;
	res = print_hex((unsigned long)p, HEX_L);
	if (res == -1)
		return (-1);
	return (count + res);
}
