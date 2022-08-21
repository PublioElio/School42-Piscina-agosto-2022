/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:06:20 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/20 20:06:40 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	int	mistery;
	char	str[14] = "Necronomicón";
	char	str2[13] = "            ";
	char	empt[] = "";

	mistery = ft_str_is_printable(str);
	printf("The string '%s' contains not printable characters?\n\t0 = no\n\t1 = yes\n", str);
	printf("%d", mistery);
	mistery = ft_str_is_printable(str2);
	printf("\nThe string '%s' contains not printable characters?\n\t0 = no\n\t1 = yes\n", str2);
	printf("%d", mistery);
	mistery = ft_str_is_printable(empt);
	printf("\nIs '%s' an empty string?\n\t0 = no\n\t1 = yes\n", empt);
	printf("%d", mistery);
	return (0);
}
