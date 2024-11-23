/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:33:46 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/27 11:45:10 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Allocates (with malloc(3)) and returns a new node. The member variable
* ’content’ is initialized with the value of the parameter ’content’.
* The variable ’next’ is initialized to NULL.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *) malloc(sizeof(t_list));
	if (!new_node)
		return ((t_list *) ft_mallocfailed("ft_lstnew"));
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/* int	main(int argc, char **argv)
{
	t_list	*new;

	new = ft_lstnew(argv[1]);
	printf("%s", (char *) new->content);
	return (0);
} */