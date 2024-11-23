/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:34:20 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/27 11:17:49 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
* Takes as a parameter a node and frees the memory of the node’s content using
* the function ’del’ given as a parameter and free the node. The memory of
* ’next’ must not be freed.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del((void *) lst->content);
	free(lst);
}
