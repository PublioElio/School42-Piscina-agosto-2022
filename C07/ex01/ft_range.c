/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:12:53 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/29 13:14:05 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*mid;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	mid = (int *)malloc(sizeof(*mid) * (max - min));
	while (min < max)
	{
		mid[i] = min;
		min++;
		i++;
	}
	return (mid);
}
