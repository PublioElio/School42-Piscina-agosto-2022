/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:04:04 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/20 21:04:08 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[14] = "NECRONOMICON";

	printf("BEFORE\n\tsrc: %s\n", str);
	ft_strlowcase(str);
	printf("AFTER\n\tsrc: %s\n", str);
	return (0);
}
