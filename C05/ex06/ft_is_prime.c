/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:48:22 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/28 19:49:35 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	number;

	number = 2;
	if (nb < 2)
		return (0);
	while (number <= nb / 2)
	{
		if (nb % number == 0)
			return (0);
		number++;
	}
	return (1);
}
