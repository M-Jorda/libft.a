/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:41:51 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/27 10:49:50 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The calloc() function allocates memory for an array of nmemb elements of size
* bytes each and returns a pointer to the allocated memory.  The memory is set
* to zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique
* pointer value that can later be successfully passed to free().  If the
* multiplication of nmemb  and size  would result in integer overflow, then
* calloc() returns an error. By contrast, an integer overflow would not be
* detected in the following call to malloc(), with the result that an incorrectly
* sized block of memory would be allocated:
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if (size == 0)
		return (malloc(0));
	if ((nmemb == 0 && size == 0) || nmemb > __SIZE_MAX__ / size)
		return (NULL);
	tab = malloc(nmemb * size);
	if (!tab)
		return (ft_mallocfailed("ft_calloc"));
	ft_memset(tab, 0, nmemb * size);
	return (tab);
}
