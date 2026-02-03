/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirdama <mmirdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 20:07:43 by mmirdama          #+#    #+#             */
/*   Updated: 2025/11/27 13:54:55 by mmirdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// #include <stdio.h>
// #include <stdlib.h>

// void	my_del(void *content)
// {
// 	if (content)
// 		free(content);
// }

// void	*ft_double(void *content)
// {
// 	int	*new_value;
// 	int	value;

// 	value = *(int *)content;
// 	new_value = (int *)malloc(sizeof(int));
// 	if (!new_value)
// 		return (NULL);
// 	*new_value = value * 2;
// 	return ((void *)new_value);
// }

// int	main(void)
// {
// 	t_list	*original = NULL;
// 	t_list	*mapped = NULL;
// 	t_list	*temp = NULL;

// 	int	*n1 = malloc(sizeof(int));
// 	int	*n2 = malloc(sizeof(int));

// 	*n1 = 5;
// 	*n2 = 10;
// 	ft_lstadd_back(&original, ft_lstnew(n1));
// 	ft_lstadd_back(&original, ft_lstnew(n2));
// 	printf("original list (contents):\n");
// 	temp = original;
// 	while (temp)
// 	{
// 		printf("%d\n", *(int *)temp->content);
// 		temp = temp->next;
// 	}
// 	mapped = ft_lstmap(original, ft_double, my_del);
// 	printf("mapped list (contents):\n");
// 	temp = mapped;
// 	while (temp)
// 	{
// 		printf("%d\n", *(int *)temp->content);
// 		temp = temp->next;
// 	}
// 	ft_lstclear(&mapped, my_del);
// 	ft_lstclear(&original, my_del);
// 	return(0);
// }