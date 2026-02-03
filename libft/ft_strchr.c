/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:49:01 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/19 13:32:29 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != c)
	{
		if (*ptr == '\0')
			return (0);
		ptr++;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s;
// 	int		c;

// 	s = "geeky nerdss";
// 	c = 'e';
// 	printf("my res:\t%s\n", ft_strchr(s, c));
// 	printf("built res:\t%s\n", strchr(s, c));
// 	return (0);
// }