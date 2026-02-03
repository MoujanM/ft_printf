/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:11:35 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/19 13:21:21 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (d_len >= n)
		return (s_len + n);
	i = 0;
	while ((d_len + i) < n - 1 && src[i] != '\0')
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	const char	*src = "to copy!";
// 	char	dest[40] = "beginning";

// 	printf("result of my strlcat: |%zu|\n", ft_strlcat(dest, src, 20));
// 	printf("result of system strlcat: |%zu|\n", strlcat(dest, src, 20));
// 	return (0);	
// }