/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 20:23:43 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/19 12:46:17 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	if (n > 0)
	{
		while (i < n - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*src;
// 	char	dest[5];

// 	src = "copy me if you can!";
// 	printf("result of cpy: |%zu|\n", ft_strlcpy(dest, src, 10));
// 	return (0);	
// }