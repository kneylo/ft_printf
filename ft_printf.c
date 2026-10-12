/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 01:00:48 by nkreter           #+#    #+#             */
/*   Updated: 2026/10/13 01:27:30 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_in(char c)
{
	char	*in;
	int		i;

	in = "cspdiuxX%";
	i = 0;
	while (in[i])
	{
		if (c == in[i])
			return (1);
		i++;
	}
	return (0);
}

static int	conversion(char type, va_list *ap)
{
	if (type == 'c')
		return (print_c((char)va_arg(*ap, int)));
	else if (type == 's')
		return (print_s(va_arg(*ap, char *)));
	else if (type == 'd' || type == 'i')
		return (print_di(va_arg(*ap, int)));
	else if (type == 'u')
		return (print_u(va_arg(*ap, unsigned int)));
	else if (type == 'p')
		return (print_p(va_arg(*ap, void *)));
	else if (type == 'x' || type == 'X')
	{
		if (type == 'x')
			return (print_hex(va_arg(*ap, unsigned long), HEX_L));
		else
			return (print_hex(va_arg(*ap, unsigned long), HEX_H));
	}
	else if (type == '%')
		return (print_c('%'));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		res;
	va_list	ap;
	int	count;

	count = 0;
	res = 0;
	va_start(ap, s);
	while (*s)
	{
		if (*s == '%' && is_in(*(s + 1)))
		{
			res = conversion(*(s + 1), &ap);
			s += 2;
		}
		else
			res = print_c(*s++);
		if (res == -1)
			break ;
		count += res;
	}
	va_end(ap);
	if (res == -1)
		return (-1);
	return (count);
}
