/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:25:07 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/27 14:26:25 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	nb;
	int	result;

	printf("Imput a number to acalculate a factorial: \n");
	scanf("%d", &nb);
	result = ft_iterative_factorial(nb);
	printf("The factorial of %d is %d", nb, result);
	return (0);
}
