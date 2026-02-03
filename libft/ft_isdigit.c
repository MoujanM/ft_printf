/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:05:35 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/11 17:08:53 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
// 	printf("my function res:\t%d\n", ft_isdigit(*argv[1]));
// 	printf("built-in function res:\t%d\n", isdigit(*argv[1]));
// 	return (0);
// }