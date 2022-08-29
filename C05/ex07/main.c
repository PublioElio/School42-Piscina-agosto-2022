/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:50:53 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/28 19:51:19 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	nb;

	nb = 0;
	printf("Enter the number to find the next prime number:");
	scanf("%d", &nb);
	nb = ft_find_next_prime(nb);
	printf("The next prime number is: %d", nb);
	return (0);
}
