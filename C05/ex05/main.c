/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:54:12 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/28 18:54:59 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	nb;

	nb = 0;
	printf("Enter the number to make the square root: ");
	scanf("%d", &nb);
	nb = ft_sqrt(nb);
	printf("The result is: %d", nb);
	return (0);
}
