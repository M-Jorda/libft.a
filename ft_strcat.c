/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 09:55:06 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/27 10:56:34 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The  strcat() function appends the src string to the dest string, overwriting
* the terminating null byte at the end of dest, and then adds a terminating null
* byte. The strings may not overlap, and the dest string must have  enough space
* for the result. If dest is not large enough, program behavior is unpredictable;
* buffer overruns are a favorite avenue for attacking secure programs.
*/
char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
