/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:11:44 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/17 23:13:30 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str);

/* This main is only for testing purposes */
int	main(void)
{
	int	total;
	char	str[9] = "School42";

	total = ft_strlen(str);
	printf("The total number of letters in the word %s are %d.\n", str, total);
	return (0);
}
