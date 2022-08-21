/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:00:24 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/20 20:00:32 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	int	mistery;
	char	str[7] = "SHODAN";
	char	str2[9] = "School42";
	char	empt[] = "";

	mistery = ft_str_is_uppercase(str);
	printf("The string '%s' contains only uppercase characters?\n\t0 = no\n\t1 = yes\n", str);
	printf("%d", mistery);
	mistery = ft_str_is_uppercase(str2);
	printf("\nThe string '%s' contains only uppercase characters?\n\t0 = no\n\t1 = yes\n", str2);
	printf("%d", mistery);
	mistery = ft_str_is_uppercase(empt);
	printf("\nIs '%s' an empty string?\n\t0 = no\n\t1 = yes\n", empt);
	printf("%d", mistery);
	return (0);
}
