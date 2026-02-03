/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:31:59 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/20 13:05:36 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count(char const *str, char delim)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == delim)
			str++;
		if (*str)
		{
			count++;
			while (*str && *str != delim)
				str++;
		}
	}
	return (count);
}

static void	ft_free_arr(char **arr, int n)
{
	while (n >= 0)
	{
		free(arr[n]);
		n--;
	}
	free(arr);
}

static char	*next_word(const char **s, char c)
{
	const char	*word_start;
	size_t		len;

	while (**s == c)
		(*s)++;
	word_start = *s;
	while (**s && **s != c)
		(*s)++;
	len = *s - word_start;
	if (len == 0)
		return (NULL);
	return (ft_substr(word_start, 0, len));
}

static char	**arr_fill(char **arr, const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (*s)
	{
		word = next_word(&s, c);
		if (word)
		{
			arr[i] = word;
			i++;
		}
		else if (!word && *s != '\0')
		{
			ft_free_arr(arr, i);
			return (NULL);
		}
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (!arr_fill(arr, s, c))
		return (NULL);
	return (arr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*string;
// 	char	c;
// 	char	**arr;
// 	int		i;

// 	string = "I9love9to9split9!9!9!9";
// 	c = '9';
// 	arr = ft_split(string, c);
// 	i = 0;
// 	while (arr[i])
// 	{
// 		printf("%s\n", arr[i]);
// 		i++;	
// 	}
// 	return (0);
// }