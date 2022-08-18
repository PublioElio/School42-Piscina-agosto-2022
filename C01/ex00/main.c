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
void	ft_ft(int *nbr);

/* This main is only for testing purposes */
int main(void)
{
	int	x;

	x = 0;
	printf("Before: %d\n", x); // we print the original value of the variable
	ft_ft(&x); // here we send the memory allocation
	printf("After: %d\n", x); // here we print the changes
	return(0);
}
