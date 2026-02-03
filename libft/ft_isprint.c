/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:23:21 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/11 17:25:34 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(int argc, char *argv[])
// {
// 	(void)argc;
// 	printf("my function res:\t%d\n", ft_isprint(*argv[1]));
// 	printf("built-in function res:\t%d\n", isprint(*argv[1]));
// 	return (0);
// }