/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:03:17 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/26 10:44:39 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The strnstr() function locates the first occurrence of the null-terminated
* string little in the string big, where not more than len characters are
* searched. Characters that appear after a ‘\0’ character are not searched.
* Since the strnstr() function is a FreeBSD specific API, it should
* only be used when portability is not a concern.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;

	i = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while ((little[j]) && (little[j] == big[i + j]) && i + j < len)
		{
			if (!little[j + 1])
				return ((char *) &big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
