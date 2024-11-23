/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:54:29 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/27 12:42:41 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_memmoveloop(
	unsigned char *dest,
	unsigned char *src,
	size_t n,
	int boolean)
{
	size_t	i;

	if (boolean)
	{
		i = n;
		while (i > 0)
		{
			dest[i - 1] = src[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
}

/*
* The memmove() function copies n bytes from memory area src to memory area dest.
* The memory areas may overlap: copying takes place as though the bytes in src
* are first copied into a temporary array that does not overlap src or dest, and
* the bytes are then copied from the temporary array to dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_tab;
	unsigned char	*src_tab;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_tab = (unsigned char *) dest;
	src_tab = (unsigned char *) src;
	if (dest_tab > src_tab && dest_tab < src_tab + n)
		ft_memmoveloop(dest_tab, src_tab, n, 1);
	else
		ft_memmoveloop(dest_tab, src_tab, n, 0);
	return (dest);
}

/* int	main(int argc, char **argv)
{
	char	dest[100];

	ft_memmove(dest, argv[1], (size_t) ft_atoi(argv[2]));

	printf("%s", dest);

	return (0);
} */