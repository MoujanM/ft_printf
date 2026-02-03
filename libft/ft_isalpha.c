/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:35:59 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/11 17:14:36 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int num)
{
	if ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>
// #include <ctype.h>
// #include <stdlib.h>

// int	main(int argc, char *argv[])
// {	
// 	(void)argc;
// 	printf("my function res:\t%d\n", ft_isalpha(*argv[1]));
// 	printf("built-in function res:\t%d\n", isalpha(*argv[1]));
// 	return (0);
// }