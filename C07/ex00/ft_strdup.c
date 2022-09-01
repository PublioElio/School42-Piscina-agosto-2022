/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:01:17 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/29 13:02:17 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	str = (char *) malloc (sizeof(*str) * (size));
	while (i < size)
	{
		str[i] = src[i];
		i++;
	}
	str[size] = '\0';
	return (str);
}
