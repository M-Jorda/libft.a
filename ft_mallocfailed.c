/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mallocfailed.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:52:53 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/27 11:49:00 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src);

size_t	ft_strlen(const char *s);

/*
* This function logs an error message to standard error indicating a malloc
* failure in a specified function and returns NULL.
*/
void	*ft_mallocfailed(char *funcname)
{
	char	*errmess;
	char	*prefix;

	prefix = "Error with malloc in the function: ";
	errmess = malloc(sizeof(char)
			* (ft_strlen(prefix) + ft_strlen(funcname) + 1));
	if (!errmess)
		return (NULL);
	ft_strcpy(errmess, prefix);
	ft_strcat(errmess, funcname);
	write(2, errmess, ft_strlen(errmess));
	write(2, "\n", 1);
	free(errmess);
	return (NULL);
}
