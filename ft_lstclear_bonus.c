/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:38:01 by jjorda            #+#    #+#             */
/*   Updated: 2024/10/26 12:27:38 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Deletes and frees the given node and every successor of that node, using the
* function ’del’ and free(3).
* Finally, the pointer to the list must be set to NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	current = *lst;
	while (current)
	{
		*lst = current->next;
		del((void *) current->content);
		free(current);
		current = *lst;
	}
}

// int	main(int argc, char **argv)
// {
// 	(void) argc;
// 	return (0);
// }