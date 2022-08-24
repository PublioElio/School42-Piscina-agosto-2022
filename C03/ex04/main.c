/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:36:44 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/21 16:36:46 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* function finds the first occurrence of the substring 'str' in the string 
'to_find'. The terminating '\0' characters are not compared. */
#include<stdio.h>
#include<unistd.h>

char	*ft_strstr(char *str, char *to_find);

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
}

int	main(void)
{
	char	str[] = {"Seattle is the city"};
	char	to_find[] = {"att"};
	char	*ret;

	ret = ft_strstr(str, to_find);
	ft_putstr(ret);
	return (0);
}
