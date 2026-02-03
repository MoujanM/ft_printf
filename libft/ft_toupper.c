/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:37:10 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/12 14:46:01 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(int argc, char *argv[])
// {
// 	(void)argc;
// 	printf("Result:\t%c\n", ft_toupper(*argv[1]));
// 	printf("Result:\t%c\n", toupper(*argv[1]));
// 	return (0);
// }