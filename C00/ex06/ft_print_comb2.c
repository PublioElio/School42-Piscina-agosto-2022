/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:32:24 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/16 11:32:47 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			c = (a / 10) + '0';
			write(1, &c, 1);
			c = (a % 10) + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			c = (b / 10) + '0';
			write(1, &c, 1);
			c = (b % 10) + '0';
			write(1, &c, 1);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
		}
	}
}