/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:00:53 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/21 16:00:56 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strncat appends the string pointed to by 'src' to the end of the string 
pointed to by 'dest' up to 'n' characters long */

#include<stdio.h>
#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	unsigned int	nb;
	char			src[50];
	char			dest1[50];
	char			dest2[50];

	nb = 6;
	strcpy(src, "for All the Fish");
	strcpy(dest1, "So Long, and Thanks ");
	strcpy(dest2, "So Long, and Thanks ");
	printf("Those are the stings to append:\n\tDEST: %s\n\tSRC: %s\n", dest1, src);
	strncat(dest1, src, nb);
	printf("\nFinal result with strncat function: | %s |\n", dest1);
	ft_strncat(dest2, src, nb);
	printf("\nFinal result with ft_strncat: | %s |\n", dest2);
	return (0);
}
