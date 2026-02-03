/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:49:12 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/27 13:54:42 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*data1 = "Node 1";
// 	char	*data2 = "Node 2";
// 	char	*data3 = "Node 3";

// 	int	len;

// 	t_list	*node_1;
// 	t_list	*node_2;
// 	t_list	*node_3;

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
// 	len = ft_lstsize(node_1);
// 	printf("traversed list and counted |%d| members\n", len);
// 	free(node_1);
// 	free(node_2);
// 	free(node_3);
// 	return (0);
// }