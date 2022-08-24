/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:59:56 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/21 15:59:59 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strcat() appends the string pointed to by 'src' to the end of the string 
pointed to by 'dest' */

#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	src[50];
	char	dest[50];

	strcpy(src, "-this is source");
	strcpy(dest, "This is dest");
	printf("Those are the stings to append:\n\tSRC: %s\n\tDEST: %s\n", src, dest);
	ft_strcat(dest, src);
	printf("\nFinal result with ft_strcat: | %s |\n", dest);
	strcat(dest, src);
	printf("\nFinal result with strcat function: | %s |\n", dest);
	return (0);
}
