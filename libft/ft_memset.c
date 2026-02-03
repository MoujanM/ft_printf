/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:35:28 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/24 14:35:55 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	buffer[10];

// 	ft_memset(buffer, '0', 3);
// 	printf("my result:%s\n", buffer);
// 	memset(buffer, '0', 3);
// 	printf("built-in result:%s\n", buffer);
// 	return (0);	
// }

// int	main(int argc, char *argv[])
// {
// 	char	buffer[100];

// 	if (argc < 3)
// 	{
// 		printf("Error - need more variables");
// 		return (1);
// 	}

// }