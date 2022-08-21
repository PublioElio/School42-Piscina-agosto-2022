/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:24:05 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/20 20:24:10 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	*ft_strupcase(char *str);

int	main(void)
{
	char	str[14] = "Necronomicon";

	printf("BEFORE\n\tsrc: %s\n", str);
	ft_strupcase(str);
	printf("AFTER\n\tsrc: %s\n", str);
	return (0);
}
