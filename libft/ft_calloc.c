/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:07:45 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/19 16:05:49 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	if (size != 0 && nmemb != 0 && (total_size / nmemb != size))
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

// #include <stdint.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int	*arr;
// 	int	zero;
// 	int	i;
// 	void	*p1;
// 	void	*p2;
// 	void	*p3;
// 	void	*p4;

// 	zero = 1;
// 	arr = ft_calloc(10, sizeof(int));
// 	if (arr)
// 	{
// 		printf("arr allocation successful.\n");
// 		i = 0;
// 		while (i < 10)
// 		{
// 			if (arr[i] != 0)
// 				zero = 0;
// 			break;
// 			i++;
// 		}
// 		printf("zero initialized: %s\n", zero ? "yes" : "no");
// 		free (arr);
// 	}
// 	else
// 	{
// 		printf("arr allocation failed.\n");
// 	}
// 	p1 = ft_calloc(0, sizeof(int));
// 	printf("nmemb = zero, return: %p\n", p1);
// 	free(p1);
// 	p2 = ft_calloc(10, 0);
// 	printf("size = zero, return: %p\n", p2);
// 	free(p2);
// 	p3 = ft_calloc(0, 0);
// 	printf("size & nmemb = zero, return: %p\n", p3);
// 	free(p3);
// 	p4 = ft_calloc(SIZE_MAX, 5);
// 	printf("overflow return: %p\n", p4);
// 	return (0);
// }