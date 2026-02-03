/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:21:19 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/19 17:01:27 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;
	int		len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= i && is_set(s1[j], set))
		j--;
	len = j - i + 1;
	if (len < 0)
		len = 0;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + i, len + 1);
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s1;
// 	const char	*set;

// 	s1 = "I am the best I am";
// 	set = "I am";
// 	printf("trimmed string: |%s|\n", ft_strtrim(s1, set));
// 	return (0);
// }