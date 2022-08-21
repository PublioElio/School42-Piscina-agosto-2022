/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:09:26 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/20 21:09:32 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	j;	
	int	i;

	j = 0;
	i = 0;
	while (str[j] != '\0')
	{
		if (i == 0 && (str[j] >= 'a' && str[j] <= 'z'))
		{
			str[j] -= 'a' - 'A';
			i++;
		}
		else if (i > 0 && (str[j] >= 'A' && str[j] <= 'Z'))
			str[j] += 'a' - 'A';
		else if ((str[j] < '0') || (str[j] > '9' && str[j] < 'A')
			|| (str[j] > 'Z' && str[j] < 'a') || (str[j] > 'z'))
			i = 0;
		else
			i++;
		j++;
	}
	return (str);
}
