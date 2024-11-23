/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:57:43 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/26 10:56:12 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Outputs the string ’s’ to the given file descriptor followed by a newline.
*/
void	ft_putendl_fd(char *s, int fd)
{
	char	n;

	n = '\n';
	ft_putstr_fd(s, fd);
	write(fd, &n, 1);
}
