/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:33:06 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/28 13:34:38 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;
	int	result;

	printf("Enter a base number: \n");
	scanf("%d", &nb);
	printf("Enter an exponent: \n");
	scanf("%d", &power);
	result = ft_iterative_power(nb, power);
	printf("The result is: %d", result);
	return (0);
}
