/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:44:44 by jjorda            #+#    #+#             */
/*   Updated: 2024/10/26 12:26:57 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The  strdup()  function returns a pointer to a new string which is a duplicate
* of the string s.  Memory for the new string is obtained with malloc(3), and
* can be freed with free(3).
*/
char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = ft_strlen(src);
	dest = (char *) malloc((i + 1) * sizeof(char));
	if (!dest)
		return ((char *) ft_mallocfailed("ft_strdup"));
	ft_strcpy(dest, src);
	return (dest);
}

// int	main(int argc, char **argv)
// {
// 	char	*dup;

// 	dup = ft_strdup(argv[1]);
// 	printf("%s", dup);
// 	free(dup);
// 	return (1);
// }