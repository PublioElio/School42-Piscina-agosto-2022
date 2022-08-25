/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:22:50 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/24 16:06:40 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int		i;
	char	str[9] = "School42";

	i = ft_strlen(str);
	printf("The strng %s is %d characters long\n", str, i);
	return (0);
}
