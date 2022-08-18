/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:25:43 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/17 23:38:29 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size);
void	print_array(int *tab, int size);

void	print_array(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", *(tab + i));
		i++;
	}
}

/* This main is only for testing purposes */
int	main(void)
{
	int	size;
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	size = 10;
	printf("This is the array we're going to reverse:\n");
	print_array(tab, size);
	ft_rev_int_tab(tab, size);
	printf("\nAnd this is the result:\n");
	print_array(tab, size);
	return (0);
}
