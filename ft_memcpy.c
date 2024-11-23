/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:54:29 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/27 12:42:45 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memcpy() function copies n bytes from memory area src to memory area dest.
* The memory areas must not overlap.  Use memmove(3) if the memory areas do
* overlap.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_tab;
	unsigned char	*src_tab;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_tab = (unsigned char *) dest;
	src_tab = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		dest_tab[i] = src_tab[i];
		i++;
	}
	return (dest);
}

/* int	main(int argc, char **argv)
{
	char	dest[100];

	ft_memcpy(dest, argv[1], (size_t) ft_atoi(argv[2]));
	printf("%s\n", dest);
	memcpy(dest, argv[1], (size_t) ft_atoi(argv[2]));
	printf("%s\n", dest);

	return (0);
} */