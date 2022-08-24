/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:00:44 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/21 16:00:47 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = 0;
	len_src = 0;
	while (dest[len_dest])
		len_dest++;
	while ((len_src < nb) && src[len_src])
	{
		dest[len_dest] = src[len_src];
		len_dest++;
		len_src++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
