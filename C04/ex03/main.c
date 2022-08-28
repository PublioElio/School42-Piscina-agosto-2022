/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:22:14 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/24 12:22:34 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	int		i;
	int		j;
	char	str[] = "-----f--24441mmmm4748mmm3647";

	j = ft_atoi(str);
	printf("This is the result with the 'ft_atoi' function: %d\n", j);
	i = atoi(str);
	printf("This is the result with the 'atoi' function: %d\n", i);
	return (0);
}
