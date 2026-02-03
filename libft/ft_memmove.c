/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 19:42:14 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/19 12:29:12 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d > s && d <= s + n)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	// const char	src[10] = "Weirdo!";
// 	char		dest[50];

// 	bzero(dest, 50);
// 	strcpy(dest, "Hello there");
// 	printf("before memmove:\t|%s|\n", dest);
// 	ft_memmove(dest + 5, dest, 15);
// 	printf("after my memmove:\t|%s|\n", dest);
// 	bzero(dest, 50);
// 	strcpy(dest, "Hello there");
// 	memmove(dest + 5, dest, 15);
// 	printf("after built memmove:\t|%s|\n", dest);
// 	bzero(dest, 50);
// 	strcpy(dest, "Hello there");
// 	printf("before memmove:\t|%s|\n", dest);
// 	ft_memmove(dest, dest + 5, 15);
// 	printf("after my memmove:\t|%s|\n", dest);
// 	bzero(dest, 50);
// 	strcpy(dest, "Hello there");
// 	memmove(dest, dest + 5, 15);
// 	printf("after built memmove:\t|%s|\n", dest);
// 	return (0);
// }