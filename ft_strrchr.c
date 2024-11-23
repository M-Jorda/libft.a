/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:20:44 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/26 10:43:13 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The strrchr() function returns a pointer to the last occurrence of
* the character c in the string s.
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	if (c > 255)
		c %= 256;
	i = 0;
	j = -1;
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (j != -1)
		return ((char *) &s[j]);
	if (c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
