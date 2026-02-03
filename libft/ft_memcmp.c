/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 18:47:07 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/20 16:54:05 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	unsigned int	i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return (ptr1[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	main(int argc, char *argv[])
// {
// 	unsigned int	n;
// 	char		*s1;
// 	char		*s2;

// 	if (argc < 4)
// 	{
// 		printf("Error - need more input\n");
// 		return (1);
// 	}
// 	s1 = argv[1];
// 	s2 = argv[2];
// 	n = (unsigned int)strtoul(argv[3], NULL, 10);
// 	printf("My function result: \"%d\"\n", ft_memcmp(s1, s2, n));
// 	printf("Built-in function result: \"%d\"\n", memcmp(s1, s2, n));
// 	return (0);
// }