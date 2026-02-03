/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:59:26 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/24 14:42:21 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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
// 	printf("My function result: \"%d\"\n", ft_strncmp(s1, s2, n));
// 	printf("Built-in function result: \"%d\"\n", strncmp(s1, s2, n));
// 	return (0);
// }