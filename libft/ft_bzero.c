/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:20:53 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/19 12:17:02 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// #include <strings.h>

// int	main(void)
// {
// 	char	buffer[10];

// 	ft_bzero(buffer, 3);
// 	printf("my result:%s\n", buffer);
// 	bzero(buffer, 3);
// 	printf("built-in result:%s\n", buffer);
// 	return (0);	
// }
