/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:28:04 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/17 21:33:18 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

/* This main is only for testing purposes */
int main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 6;
	printf("Those are the values to operate: %d, %d.\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("And this is the result:\nDivision: %d\nModule:%d\n", a, b);
}
