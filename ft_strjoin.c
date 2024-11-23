/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:37:30 by jjorda            #+#    #+#             */
/*   Updated: 2024/11/05 12:42:51 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Allocates (with malloc(3)) and returns a new string, which is the result of
* the concatenation of ’s1’ and ’s2’.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	while (s1[i])
		i++;
	j = -1;
	while (s2[++j])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	j = -1;
	while (s2[++j])
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}

/* int	main(int argc, char **argv)
{
	char	*str;

	str = ft_strjoin(argv[1], argv[2]);
	printf("%s", str);
	free(str);
	return (0);
} */
