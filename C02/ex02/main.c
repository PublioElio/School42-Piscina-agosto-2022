/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:44:17 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/19 12:45:04 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	ft_str_is_alpha(char *str);

int	main(void)
{
	int	mistery;
	char	str[13] = "Nyarlathotep";
	char	str2[9] = "R'lyeh";
	char	empt[] = "";

	mistery = ft_str_is_alpha(str);
	printf("The word '%s' contains special characters?\n1 = no\n0 = yes\n", str);
	printf("%d", mistery);
	mistery = ft_str_is_alpha(str2);
	printf("\nThe word '%s' contains special characters?\n1 = no\n0 = yes\n", str2);
	printf("%d", mistery);
	mistery = ft_str_is_alpha(empt);
	printf("\nIs '%s' an empty string?\n0 = no\n1 = yes\n", empt);
	printf("%d", mistery);
	return (0);
}
