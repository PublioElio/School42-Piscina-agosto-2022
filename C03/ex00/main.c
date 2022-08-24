/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:58:30 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/21 17:42:31 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strcmp() - Devuelve 0 si las cadenas de texto son iguales 
(incluyendo mayúsculas y minúsculas); si la primera cadena 
es mayor que la segunda, devuelve un número positivo; 
si es mayor la segunda, devuelve un valor negativo */

#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "School42";
	char	s2[] = "Try me";
	int		num;

	num = strcmp(s1, s2);
	printf("\nResult with function strcmp: %d", num);
	num = ft_strcmp(s1, s2);
	printf("\nResult with function ft_strcmp %d", num);
	return (0);
}
