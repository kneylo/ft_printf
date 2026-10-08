/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 01:00:45 by nkreter           #+#    #+#             */
/*   Updated: 2026/10/06 22:56:02 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_s(char *str)
{
	int	i;
	int	count;

	if (!s)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
	{
		count += print_c((int)str[i]);
		i++;
	}
	return (count);
}