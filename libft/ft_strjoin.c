/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:18:27 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/19 16:55:24 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_size;
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_size = s1_len + s2_len + 1;
	ptr = malloc(total_size * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, total_size);
	ft_strlcat(ptr, s2, total_size);
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char const	*s1;
// 	char const	*s2;
// 	char		*result;

// 	s1 = "I am the prefix";
// 	s2 = "I am the suffix";
// 	result = ft_strjoin(s1, s2);
// 	printf("joined:|%s|\n", result);
// 	return (0);
// }