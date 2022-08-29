/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:49:45 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/28 19:50:29 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	nb;

	nb = 0;
	printf("Enter the number to check prime:");
	scanf("%d", &nb);
	nb = ft_is_prime(nb);
	if (nb == 0)
		printf("That's not a prime number");
	else
		printf("That's a prime number");
	return (0);
}
