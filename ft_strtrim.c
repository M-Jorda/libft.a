/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:15:08 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/27 10:54:12 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
* specified in ’set’ removed from the beginning and the end of the string.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	start = 0;
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end - 1]))
		end--;
	str = ft_substr(s1, start, end - start);
	if (!str)
		return ((char *) ft_mallocfailed("ft_strtrim"));
	return (str);
}

/* int	main(int argc, char **argv)
{
	char	*str;
	
	(void) argc;
	str = ft_strtrim(argv[1], argv[2]);
	printf("%s", str);
	free(str);
	return (0);
} */
