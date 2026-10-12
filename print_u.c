/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 01:00:26 by nkreter           #+#    #+#             */
/*   Updated: 2026/10/13 01:12:45 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_u(unsigned int n)
{
	int	count;
	int	res;

	count = 0;
	if (n > 9)
	{
		res = print_u(n / 10);
		if (res == -1)
			return (-1);
		count += res;
	}
	res = print_c((n % 10) + 48);
	if (res == -1)
		return (-1);
	return (count + res);
}
