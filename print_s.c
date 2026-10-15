/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 01:00:45 by nkreter           #+#    #+#             */
/*   Updated: 2026/10/15 03:05:04 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(char *str)
{
	int	i;
	int	res;

	if (!str)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
	{
		res = print_c((int)str[i]);
		if (res == -1)
			return (-1);
		i++;
	}
	return (i);
}
