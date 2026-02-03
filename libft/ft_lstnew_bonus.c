/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:00:26 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/27 13:54:48 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*my_data;
// 	t_list	*new_cont;

// 	my_data = "Hello struct!!";
// 	new_cont = ft_lstnew(my_data);
// 	if (!new_cont)
// 	{
// 		printf("malloc failed");
// 		return (1);
// 	}
// 	printf("new data addres: |%p|\n", new_cont->content);
// 	printf("content value: |%s|\n", (char *)new_cont->content);
// 	printf("next pointer: |%p|\n", new_cont->next);
// 	if (new_cont->content == my_data && new_cont->next == NULL)
// 		printf("function success :)\n");
// 	else 
// 		printf("function failed :(\n");
// 	free(new_cont);
// 	return (0);
// }