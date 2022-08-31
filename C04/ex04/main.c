/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:25:08 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/24 12:25:32 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	int		nbr;
	char	base[20];

	nbr = 0;
	printf("Enter a number: ");
	scanf("%d", &nbr);
	printf("Enter a base: ");
	scanf("%s", base);
	ft_putnbr_base(nbr, base);
	return (0);
}
