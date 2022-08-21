/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 18:29:05 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/18 18:34:39 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcpy(char *dest, char *src);	

int	main(void)
{
	char	source[] = "School42 París.";
	char	destination[] = "School42 Málaga.";
	char	*dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destination);
	dest = ft_strcpy(destination, source);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}
