/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 13:42:46 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/27 11:45:34 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
* Counts the number of nodes in a list.
*/
int	ft_lstsize(t_list *lst)
{
	int	size;

	if (!lst)
		return (0);
	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// int	main(int argc, char **argv)
// {
// 	t_list	*head;
// 	t_list	*current;

// 	head = ft_lstnew(argv[1]);
// 	current = ft_lstnew(argv[2]);
// 	if (!head || !current)
// 	{
// 		printf("NULL POINTER");
// 		return (0);
// 	}
// 	ft_lstadd_back(&head, current);
// 	// printf("content of head: %s\n", (char *) head->content);
// 	printf("list contained: %d\n", ft_lstsize(head));
// 	free(head);
// 	free(current);
// 	return (0);
// }