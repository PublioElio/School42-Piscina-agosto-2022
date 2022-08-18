/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:46:01 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/17 20:51:01 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b);

/* This main is only for testing purposes */
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 84;
	printf("Before: %d, %d\n", a, b);
	ft_swap(&a, &b); // here we send the memory allocation to de function
	printf("After: %d, %d\n", a, b); // and here we check the changes
	return (0);
}
