/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 18:06:25 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/17 18:10:40 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <limits.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		i;

	if (n == 0)
		write(fd, "0", 1);
	str[11] = '\0';
	i = 10;
	if (n != 0)
	{
		if (n == INT_MIN)
			write(fd, "-2147483648", 11);
		else if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		while (n > 0)
		{
			str[i] = (n % 10) + '0';
			n /= 10;
			i--;
		}
	}
	write(fd, &str[i + 1], (10 - i));
}

// int	main(void)
// {
// 	ft_putnbr_fd(-2147483648, 1);
// 	return (0);
// }