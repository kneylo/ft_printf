/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_di.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 01:00:35 by nkreter           #+#    #+#             */
/*   Updated: 2026/10/13 01:12:32 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_di(int n)
{
	long	nbr;
	int		res;
	int		count;

	count = 0;
	nbr = n;
	if (nbr < 0)
	{
		res = print_c('-');
		if (res == -1)
			return (-1);
		nbr *= -1;
		count += res;
	}
	if (nbr > 9)
	{
		res = print_di(nbr / 10);
		if (res == -1)
			return (-1);
		count += res;
	}
	res = print_c((nbr % 10) + 48);
	if (res == -1)
		return (-1);
	return (count + res);
}
