/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 19:46:18 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/27 13:55:21 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		next_node = (*lst)->next;
		if (del)
			del((*lst)->content);
		free(*lst);
		*lst = next_node;
	}
}

// #include <stdio.h>

// void	my_del(void *content)
// {
// 	if (content)
// 		free(content);
// }

// int	main(void)
// {
// 	t_list	*head = NULL;

// 	head = ft_lstnew(ft_strdup("Node A"));
// 	head->next = ft_lstnew(ft_strdup("Node B"));
// 	head->next->next = ft_lstnew(ft_strdup("Node C"));
// 	printf("list created with 3 nodes.\n");
// 	ft_lstclear(&head, &my_del);
// 	if (head == NULL)
// 		printf("list deleted and set to NULL.\n");
// 	else
// 		printf("function unsuccesfull - head is not NULL.\n");
// 	return (0);
// }