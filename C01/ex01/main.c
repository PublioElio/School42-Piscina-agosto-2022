/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:52:12 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/17 11:55:13 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

/* This main is only for testing purposes */
int	main(void)
{
	int	x;

	x = 0;
	printf("Before: %d\n", x); // here we print the original value of the variable
	/* here we declare the pointers and pass the directions from one to another */
	int *p1 = &x;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;

	ft_ultimate_ft(&p8);
	printf("After: %d\n", x); // and here we check the changes
	return (0);
}
