/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:21:48 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/26 13:42:17 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* checks for any printable character including space.
*/
int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (16384);
	return (0);
}

// int	main(void)
// {
// 	for (int i = '0'; i <= '9'; i++)
// 	{
// 		printf("ft = %d / %d\n", ft_isprint(i), isprint(i));
// 	}
// 	return (0);
// }