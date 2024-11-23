/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:18:57 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/30 08:59:16 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Iterates the list ’lst’ and applies the function f’ on the content of each
* node. Creates a new list resulting of the successive applications of the
* function ’f’. The ’del’ function is used to delete the content of a node
* if needed.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*head;

	head = NULL;
	while (lst)
	{
		current = ft_lstnew(0);
		if (!current)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		current->content = f(lst->content);
		ft_lstadd_back(&head, current);
		lst = lst->next;
	}
	return (head);
}
