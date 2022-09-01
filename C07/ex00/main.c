/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:09:11 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/29 13:09:43 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* he strdup() function creates a duplicate of the string pointed to by src, 
and returns a pointer to the new copy */
#include<stdio.h>
#include<string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*src = "School42";
	char	*dest;
	char	*dest2;

	dest = strdup(src);
	printf("Result with strdup function: %s\n", dest);
	dest2 = ft_strdup(src);
	printf("Result with ft_strdup function: %s\n", dest);
	return (0);
}
