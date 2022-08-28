/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:21:24 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/24 12:22:04 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdbool.h>

bool	space(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

bool	symbol(char c)
{
	return (c == 43 || c == 45);
}

bool	get_number(char c)
{
	return (c >= 48 && c <= 57);
}

int	ft_atoi(char *str)
{
	int	number;
	int	negative;

	number = 0;
	negative = 1;
	while (space(*str))
		str++;
	while (symbol(*str))
	{
		if (*str == 45)
			negative *= -1;
		str++;
	}
	while (get_number(*str))
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * negative);
}
