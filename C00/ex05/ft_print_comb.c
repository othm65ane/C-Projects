/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocharfao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:42:05 by ocharfao          #+#    #+#             */
/*   Updated: 2024/07/27 22:02:17 by ocharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_c0(int o, int p, int h)
{
	ft_putchar(o + '0');
	ft_putchar(p + '0');
	ft_putchar(h + '0');
	if (o != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	o;
	int	p;
	int	h;

	o = 0;
	while (o <= 7)
	{
		p = o + 1;
		while (p <= 8)
		{
			h = p + 1;
			while (h <= 9)
			{
				ft_c0(o, p, h);
				h++;
			}
			p++;
		}
		o++;
	}
}
