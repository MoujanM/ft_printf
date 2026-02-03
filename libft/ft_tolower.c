/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:46:23 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/12 14:48:28 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(int argc, char *argv[])
// {
// 	(void)argc;
// 	printf("Result:\t%c\n", ft_tolower(*argv[1]));
// 	printf("Result:\t%c\n", tolower(*argv[1]));
// 	return (0);
// }