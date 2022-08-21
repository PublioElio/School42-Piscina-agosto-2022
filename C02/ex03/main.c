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

int	ft_str_is_numeric(char *str);

int	main(void)
{
	int	mistery;
	char	str[11] = "0123456789";
	char	str2[9] = "School42";
	char	empt[] = "";

	mistery = ft_str_is_numeric(str);
	printf("The string '%s' contains only numbers?\n\t0 = no\n\t1 = yes\n", str);
	printf("%d", mistery);
	mistery = ft_str_is_numeric(str2);
	printf("\nThe string '%s' contains only numbers?\n\t0 = no\n\t1 = yes\n", str2);
	printf("%d", mistery);
	mistery = ft_str_is_numeric(empt);
	printf("\nIs '%s' an empty string?\n\t0 = no\n\t1 = yes\n", empt);
	printf("%d", mistery);
	return (0);
}
