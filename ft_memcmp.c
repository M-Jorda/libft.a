/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:55:29 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/27 12:42:48 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memcmp() function compares the first n bytes
* (each interpreted as unsigned char) of the memory areas s1 and s2.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tab_s1;
	unsigned char	*tab_s2;

	if (n == 0)
		return (0);
	tab_s1 = (unsigned char *) s1;
	tab_s2 = (unsigned char *) s2;
	while (--n
		&& ((*tab_s1 && *tab_s2) || *tab_s2 + 1)
		&& (*tab_s1 == *tab_s2))
	{
		tab_s1++;
		tab_s2++;
	}
	return ((unsigned char) *tab_s1 - *tab_s2);
}

/* int	main(int argc, char **argv)
{
	int	res;

	res = ft_memcmp(argv[1], argv[2], (size_t) ft_atoi(argv[3]));
	printf("%d\n", res);
	res = memcmp(argv[1], argv[2], (size_t) ft_atoi(argv[3]));
	printf("%d\n", res);

	return (0);
} */