/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 00:24:17 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/28 00:26:02 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	nb;
	int	result;

	printf("Imput a number to acalculate a factorial: \n");
	scanf("%d", &nb);
	result = ft_recursive_factorial(nb);
	printf("The factorial of %d is %d", nb, result);
	return (0);
}
