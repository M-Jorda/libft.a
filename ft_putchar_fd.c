/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:57:32 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/26 15:48:55 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Outputs the character ’c’ to the given file descriptor.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(int argc, char **argv)
{
	(void) argc;
	int	fd;
	fd = ft_write_file();
	ft_putchar_fd(argv[1][0], fd);
	close(fd);
	return (0);
} */