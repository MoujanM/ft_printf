/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:47:36 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/19 13:41:46 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*end;

	end = (char *)s;
	while (*end != '\0')
	{
		end++;
	}
	while (end >= s)
	{
		if (*end == c)
			return (end);
		end--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*s;
// 	int		c;

// 	s = "roses are red";
// 	c = 'e';
// 	printf("my res:\t%s\n", ft_strrchr(s, c));
// 	printf("built res:\t%s\n", strrchr(s, c));
// 	return (0);
// }