/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:10:56 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/29 13:11:18 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_range(int min, int max);

int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*mid;

	i = 0;
	min = 0;
	max = 0;
	printf("Enter a minimum: ");
	scanf("%d", &min);
	printf("Enter a maximum: ");
	scanf("%d", &max);
	mid = ft_range(min, max);
	while (mid[i])
	{
		printf("%d\n", mid[i]);
		i++;
	}
	return (0);
}
