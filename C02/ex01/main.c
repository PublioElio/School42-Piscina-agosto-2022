/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 21:45:32 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/18 21:46:20 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	source[10] = "School42.";
	char	destination[15];
	char	*dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destination);
	dest = ft_strncpy(destination, source, 6);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}
