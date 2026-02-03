/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 19:02:47 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/27 13:55:00 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*data1 = "Node 1";
// 	char	*data2 = "Node 2";
// 	char	*data3 = "Node 3";

// 	t_list	*node_1;
// 	t_list	*node_2;
// 	t_list	*node_3;
// 	t_list	*last_node;

// 	node_1 = ft_lstnew(data1);
// 	node_2 = ft_lstnew(data2);
// 	node_3 = ft_lstnew(data3);

// 	if (!node_1 || !node_2 || !node_3)
// 	{
// 		printf("malloc failed\n");
// 		return (1);
// 	}
// 	node_1->next = node_2;
// 	node_2->next = node_3;
// 	last_node = ft_lstlast(node_1);
// 	printf("last node of the list is at |%p| address\n", last_node);
// 	printf("last node content: |%s|", (char *)last_node->content);
// 	free(node_1);
// 	free(node_2);
// 	free(node_3);
// 	return (0);
// }