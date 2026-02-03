/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:24:00 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/19 15:59:20 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j] && little[j] != '\0')
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	char	*s;
// 	char	*c;

// 	s = "geeky nerdss";
// 	c = "rd";
// 	printf("my res:\t%s\n", ft_strnstr(s, c, 20));
// 	printf("built res:\t%s\n", strnstr(s, c, 20));
// 	return (0);
// }