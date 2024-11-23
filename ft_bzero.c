/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:42:47 by jjorda            #+#    #+#             */
/*   Updated: 2024/11/05 12:46:35 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

/*
* The bzero() function erases the data in the n bytes of the memory starting at
* the location pointed to by s, by writing zeros (bytes containing '\0') to that
* area. The explicit_bzero()  function performs the same task as bzero(). It
* differs from bzero() in that it guarantees that compiler optimizations won't
* remove the erase operation if the compiler deduces that the operation is
* "unnecessary".
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/* int	main(int argc, char **argv)
{
	char	*str;

	str = ft_strdup(argv[1]);

	ft_bzero((void *) str, (size_t) ft_atoi(argv[2]));
	printf("%s\n", (char *) str);

	bzero((void *) str, (size_t) ft_atoi(argv[2]));
	printf("%s\n", (char *) str);

	free(str);

	return (0);
} */