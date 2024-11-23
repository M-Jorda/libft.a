/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:20:21 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/26 11:51:02 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memset() function fills the first n bytes of the memory area pointed to by
* s with the constant byte c.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab;

	tab = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		tab[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

/* int	main(int argc, char **argv)
{
	char	*str;
	void	*thing;

	str = ft_strdup(argv[1]);

	thing = ft_memset((void *) str, (int) argv[3][0],
		(size_t) ft_atoi(argv[4]));
	printf("%s", (char *) thing);
	
	free(str);

	return (0);
} */
