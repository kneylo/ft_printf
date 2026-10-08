/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 01:00:39 by nkreter           #+#    #+#             */
/*   Updated: 2026/10/06 22:56:48 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_p(void *p)
{
	int	count;
	int	tmp;

	if (!p)
		return (print_s("(nil)"));
	count += print_s("0x");
	count += print_hex((unsigned int)p, x);
	return (count);
}