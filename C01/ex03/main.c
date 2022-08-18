/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:11:28 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/17 21:18:55 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

/* This main is only for testing purposes */
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 12;
	b = 2;
	div = 0;
	mod = 0;
	printf("The values to make division and module are: %d & %d.\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("And the result is: \nDivision: %d\nModule: %d\n", div, mod);
}
