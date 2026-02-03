/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:58:21 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/20 14:33:42 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	if (!s || !f)
		return (0);
	ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// #include <stdio.h>

// char	map_toupper(unsigned int i, char c)
// {
// 	(void)i;
// 	return (char)ft_toupper(c);
// }

// int	main(void)
// {
// 	char	*str = "hello my world!";
// 	char	*res;

// 	res = ft_strmapi(str, map_toupper);
// 	printf("%s\n", res);
// 	free (res);
// 	return (0);	
// }
