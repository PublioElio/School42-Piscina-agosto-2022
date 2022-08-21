/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:31:46 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/20 19:32:29 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	int	mistery;
	char	str[7] = "python";
	char	str2[9] = "School42";
	char	empt[] = "";

	mistery = ft_str_is_lowercase(str);
	printf("The string '%s' contains only lowercase characters?\n\t0 = no\n\t1 = yes\n", str);
	printf("%d", mistery);
	mistery = ft_str_is_lowercase(str2);
	printf("\nThe string '%s' contains only lowercase characters?\n\t0 = no\n\t1 = yes\n", str2);
	printf("%d", mistery);
	mistery = ft_str_is_lowercase(empt);
	printf("\nIs '%s' an empty string?\n\t0 = no\n\t1 = yes\n", empt);
	printf("%d", mistery);
	return (0);
}
