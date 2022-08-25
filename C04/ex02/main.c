/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:20:11 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/24 12:20:39 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr(nb);
	write(1, "\n", 1);
	nb = 0;
	ft_putnbr(nb);
	write(1, "\n", 1);
	nb = 452;
	ft_putnbr(nb);
	write(1, "\n", 1);
	nb = -5;
	ft_putnbr(nb);
	write(1, "\n", 1);
	nb = -12;
	ft_putnbr(nb);
	return (0);
}
