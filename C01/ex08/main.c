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

void	ft_sort_int_tab(int *tab, int size);
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
	int	tab[10] = {1, 3, 2, 4, 6, 5, 9, 7, 8, 0};

	size = 10;
	printf("This is the unsorted array:\n");
	print_array(tab, size);
	ft_sort_int_tab(tab, size);
	printf("\nAnd this is the sorted array:\n");
	print_array(tab, size);
	return (0);
}
