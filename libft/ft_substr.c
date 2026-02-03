/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:49:54 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/19 16:39:25 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_len(unsigned int start, size_t len, size_t s_len)
{
	size_t	len_cpy;

	if (start >= s_len)
		return (0);
	if (s_len - start < len)
		len_cpy = s_len - start;
	else
		len_cpy = len;
	return (len_cpy);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			s_len;
	size_t			len_cpy;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	len_cpy = ft_len(start, len, s_len);
	if (len_cpy == 0)
	{
		ptr = malloc(sizeof(char));
		if (ptr)
			*ptr = '\0';
		return (ptr);
	}
	ptr = malloc((len_cpy + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s + start, len_cpy);
	ptr[len_cpy] = '\0';
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char const	*s;

// 	s = "I am coding here now";
// 	printf("function returns:|%s|\n", ft_substr(s, 12, 12));
// 	return (0);
// }