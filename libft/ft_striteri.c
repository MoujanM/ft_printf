/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:33:18 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/20 14:34:52 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <unistd.h>
// #include <stdio.h>

// void	map_putchar(unsigned int i, char *c)
// {
// 	(void)i;
// 	write(1, c, 1);
// }

// int	main(void)
// {
// 	char	*str;

// 	str = "apply function and write every l e t t e r";
// 	ft_striteri(str, map_putchar);
// 	return(0);
// }