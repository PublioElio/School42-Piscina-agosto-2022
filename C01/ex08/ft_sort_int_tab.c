/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:42:32 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/18 15:27:06 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = 1;
	while (i < size -1)
	{
		if (tab[j] < tab[i])
		{
			aux = tab[j];
			tab[j] = tab[i];
			tab[i] = aux;
			i = 0;
			j = 1;
		}
		else
		{
			i++;
			j++;
		}
	}
}
