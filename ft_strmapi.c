/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:55:02 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/26 13:33:24 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	ft_name(unsigned int i, char c)
{
	if (i > 0 && (c >= 65 && c <= 90))
		c -= 32;
	else if (c >= 97 && c <= 122)
		c += 32;
	return (c);
} */

/*
* Applies the function f to each character of the string s, passing its index as
* the first argument and the character itself as the second.
* A new string is created (using malloc(3)) to collect the results from the
* successive applications of f.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int	main(int argc, char **argv)
{
	printf("%s", ft_strmapi(argv[1], ft_name));
	free(argv[1]);
	return (0);
} */
