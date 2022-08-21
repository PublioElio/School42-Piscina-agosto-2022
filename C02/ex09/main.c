/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:09:41 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/20 21:09:44 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[62] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("BEFORE\n\tsrc: %s\n", str);
	ft_strcapitalize(str);
	printf("AFTER\n\tsrc: %s\n", str);
	return (0);
}
