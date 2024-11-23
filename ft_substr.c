/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:31:29 by jjorda            #+#    #+#             */
/*   Updated: 2024/10/26 12:31:31 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Allocates (with malloc(3)) and returns a substring from the string ’s’.
* The substring begins at index ’start’ and is of maximum size ’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	size;
	char	*substr;

	if (!s)
		return (NULL);
	if (len == 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s) - start;
	j = start;
	if (size >= len)
		substr = malloc((len + 1) * sizeof(char));
	else
		substr = malloc((size + 1) * sizeof(char));
	if (!substr)
		return ((char *) ft_mallocfailed("ft_substr"));
	j = 0;
	while (s[start] && j < len)
		substr[j++] = s[start++];
	substr[j] = '\0';
	return (substr);
}

/* int	main(int argc, char **argv)
{
	(void) argc;
	char	*lorem = "lorem ipsum dolor sit amet";
	printf("%s", ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])));
	free(argv[1]);
	return (0);
} */
