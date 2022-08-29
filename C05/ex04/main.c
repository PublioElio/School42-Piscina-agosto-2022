/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:53:06 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/28 16:54:06 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	index;

	printf("Enter an index for Fibonacci Sequence: \n");
	scanf("%d", &index);
	index = ft_fibonacci(index);
	printf("The value in that index is: %d", index);
	return (0);
}
