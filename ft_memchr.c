/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:40:21 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/27 12:42:48 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The  memchr() function scans the initial n bytes of the memory area pointed to
* by s for the first instance of c.  Both c and the bytes of the memory area
* pointed to by s are interpreted as unsigned char.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab;

	tab = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (tab[i] == (unsigned char) c)
			return (&tab[i]);
		i++;
	}
	return (NULL);
}

/* int	main(int argc, char **argv)
{
	char	*str;

	str = (char *) ft_memchr(argv[1], argv[2][0], ft_atoi(argv[3]));
	printf("%s\n", str);
	str = (char *) memchr(argv[1], argv[2][0], ft_atoi(argv[3]));
	printf("%s\n", str);
	return (0);
} */