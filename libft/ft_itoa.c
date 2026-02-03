/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:39:56 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/20 14:26:27 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

static int	digit_count(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*edge_handle(int n)
{
	char	*str;

	if (n == 0)
	{
		str = malloc(2 * sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n == INT_MIN)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	return (NULL);
}

static void	put_digits(char *str, unsigned int n, int is_neg, int len)
{
	if (is_neg)
	{
		str[0] = '-';
	}
	str[len] = '\0';
	len--;
	while (n > 0)
	{
		str[len--] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	int				is_neg;
	unsigned int	n_cpy;

	str = edge_handle(n);
	if (str != NULL)
		return (str);
	is_neg = (n < 0);
	len = digit_count(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (is_neg)
		n_cpy = -(unsigned int)n;
	else
		n_cpy = n;
	put_digits(str, n_cpy, is_neg, len);
	return (str);
}

// #include <stdio.h>
// #include <limits.h>

// int	main(void)
// {
// 	long	mynum;

// 	mynum = 1345;
// 	printf("%s\n", ft_itoa(mynum));
// 	return (0);
// }
