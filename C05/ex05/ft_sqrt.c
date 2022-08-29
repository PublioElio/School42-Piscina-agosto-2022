/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:53:01 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/28 18:53:56 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	number;

	number = 1;
	if (nb > 0)
	{
		while (number * number <= nb)
		{
			if (number * number == nb)
				return (number);
			else if (number >= 46341)
				return (0);
			number++;
		}
	}
	return (0);
}
