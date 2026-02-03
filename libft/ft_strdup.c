/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:02:54 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/19 16:10:05 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;
	int		s_len;

	s_len = ft_strlen(s);
	ptr = malloc((s_len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;

// 	s = "copy me in new memory";
// 	printf("function res: |%s|\n", ft_strdup(s));
// 	return (0);
// }