/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:47:17 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/24 14:37:57 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	neg_count;
	int	my_num;

	my_num = 0;
	neg_count = 0;
	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n'
		|| *nptr == '\r' || *nptr == '\t' || *nptr == '\v')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			neg_count = 1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		my_num = my_num * 10 + (*nptr - '0');
		nptr++;
	}
	if (neg_count)
		my_num = -my_num;
	return (my_num);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char *argv[])
// {
// 	char	*str;

// 	if (argc < 2)
// 	{
// 		printf("Error - need more variables");
// 		return (1);
// 	}
// 	str = argv[1];
// 	printf("My function result: \"%d\"\n", ft_atoi(str));
// 	printf("built function result: \"%d\"\n", atoi(str));
// 	return (0);
// }
