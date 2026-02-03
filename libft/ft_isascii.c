/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:14:56 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/11 17:23:00 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0x00 && c <= 0x7F)
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
// 	printf("my function res:\t%d\n", ft_isascii(*argv[1]));
// 	printf("built-in function res:\t%d\n", isascii(*argv[1]));
// 	return (0);
// }