/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 23:38:16 by cmauley           #+#    #+#             */
/*   Updated: 2026/10/15 15:52:46 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	char            c = 'A';
	char           *s = "Hello";
	char           *snull = NULL;
	int             n = -42;
	unsigned int    u = 4294967295u;
	void           *p = s;
	int             res1, res2;

	// %c
	res1 = ft_printf("ft_printf %%c : %c\n", c);
	res2 = printf("printf    %%c : %c\n", c);
	printf("retours -> ft:%d | std:%d\n\n", res1, res2);

	// %s
	res1 = ft_printf("ft_printf %%s : %s\n", s);
	res2 = printf("printf    %%s : %s\n", s);
	printf("retours -> ft:%d | std:%d\n\n", res1, res2);

	// %s avec NULL
	res1 = ft_printf("ft_printf %%s (NULL) : %s\n", snull);
	res2 = printf("printf    %%s (NULL) : %s\n", snull);
	printf("retours -> ft:%d | std:%d\n\n", res1, res2);

	// %d / %i
	res1 = ft_printf("ft_printf %%d : %d | %%i : %i\n", n, n);
	res2 = printf("printf    %%d : %d | %%i : %i\n", n, n);
	printf("retours -> ft:%d | std:%d\n\n", res1, res2);

	// %u
	res1 = ft_printf("ft_printf %%u : %u\n", u);
	res2 = printf("printf    %%u : %u\n", u);
	printf("retours -> ft:%d | std:%d\n\n", res1, res2);

	// %x / %X
	res1 = ft_printf("ft_printf %%x : %x | %%X : %X\n", u, u);
	res2 = printf("printf    %%x : %x | %%X : %X\n", u, u);
	printf("retours -> ft:%d | std:%d\n\n", res1, res2);

	// %p
	res1 = ft_printf("ft_printf %%p : %p\n", p);
	res2 = printf("printf    %%p : %p\n", p);
	printf("retours -> ft:%d | std:%d\n\n", res1, res2);

	// %p null
	res1 = ft_printf("ft_printf %%p : %p\n", NULL);
	res2 = printf("printf    %%p : %p\n", NULL);
	printf("retours -> ft:%d | std:%d\n\n", res1, res2);

	// %%
	res1 = ft_printf("ft_printf double %% : %%\n");
	res2 = printf("printf    double %% : %%\n");
	printf("retours -> ft:%d | std:%d\n\n", res1, res2);

	//mix
	res1 = ft_printf("ft_printf: %a%s/%a%%%d", "test1", 42);
	res2 = printf("printf: %a%s/%a%%%d", "test1", 42);
	printf("retours -> ft:%d | std:%d\n\n", res1, res2);
	return (0);
}