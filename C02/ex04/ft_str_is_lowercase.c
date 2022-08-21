/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:22:16 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/20 19:31:33 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] >= 'a' && str[i] <= 'z')
			i++;
		if (str[i] == '\0')
			return (1);
		else
			return (0);
	}
}
