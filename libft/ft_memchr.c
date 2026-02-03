/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:32:47 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/19 13:51:22 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;

	ch = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == ch)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char			*s;
// 	int				c;
// 	unsigned int	n;

// 	s = "geeky nerdss";
// 	c = '\0';
// 	n = 6;
// 	printf("my res: \t%s\n", (char *)ft_memchr(s, c, n));
// 	printf("built res:\t%s\n", (char *)memchr(s, c, n));
// 	return (0);
// }