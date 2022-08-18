/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-be <adiaz-be@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 22:41:30 by adiaz-be          #+#    #+#             */
/*   Updated: 2022/08/17 22:50:11 by adiaz-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

/* This main is only for testing purposes */
int	main(void)
{
	char	str[9] = "School42";

	/* is not necessary to specify memory allocation with strings */
	ft_putstr(str);
	return (0);
}
