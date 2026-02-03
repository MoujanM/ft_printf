/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:39:01 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/27 13:55:28 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*data1 = "Node 1";
// 	char	*data2 = "Node 2";
// 	char	*data3 = "Node 3";

// 	int		i = 0;

// 	t_list	*node_1;
// 	t_list	*node_2;
// 	t_list	*node_3;
// 	t_list	*my_list = NULL;

// 	node_1 = ft_lstnew(data1);
// 	node_2 = ft_lstnew(data2);
// 	node_3 = ft_lstnew(data3);

// 	if (!node_1 || !node_2 || !node_3)
// 	{
// 		printf("malloc failed\n");
// 		return (1);
// 	}
// 	ft_lstadd_front(&my_list, node_1);
// 	printf("added node 1; current head: |%s|\n", (char *)node_1->content);
// 	ft_lstadd_front(&my_list, node_2);
// 	printf("added node 2; current head: |%s|\n", (char *)node_2->content);
// 	ft_lstadd_front(&my_list, node_3);
// 	printf("added node 3; current head: |%s|\n", (char *)node_3->content);
// 	t_list	*current = my_list;
// 	while (current != NULL)
// 	{
// 		printf("%d. content: |%s|\n", i, (char *)current->content);
// 		i++;
// 		current = current->next;
// 	}
// 	free(node_1);
// 	free(node_2);
// 	free(node_3);
// 	return (0);		
// }