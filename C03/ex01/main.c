/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:59:17 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/21 15:59:20 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strncmp() function returns a negative, zero, 
or positive integer depending on whether the first n characters 
of the object pointed to by s1 are less than, equal to, or greater
than the first n characters of the object pointed to by s2 */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

void	test_str(char *s1, char *s2, unsigned int n)
{
	int	result;

	result = ft_strncmp(s1, s2, n);
	printf("\n%d\n", result);
	printf("\nThe %d first letters of '%s' are ", n, s2);
	if (result < 0)
		printf("lesser than");
	else if (result > 0)
		printf("greater than");
	else
		printf("equal to");
	printf(" '%s'\n", s1);
	result = strncmp(s1, s2, n);
	printf("\nThis is a test with the function strncmp : %d\n", result);
}

int	main(void)
{
	unsigned int	n;
	char			s1[] = "Seattle";
	char			s2[] = "Seaweed";

	n = 5;
	test_str(s1, s2, n);
	return (0);
}
