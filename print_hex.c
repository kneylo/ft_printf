/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 01:00:37 by nkreter           #+#    #+#             */
/*   Updated: 2026/10/06 22:24:26 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_hex(unsigned int n, char type)
{
	int		count;
	
	count = 0;
	if (n >= 16)
	{
		count += print_hex(n / 16, type);
		count += print_hex(n % 16, type);
	}
	if (n < 16)
	{
		if (type == 'x')
			count += print_c(HEX_L[n]);
		else
			count += print_c(HEX_H[n]);
	}
	return (count);
}