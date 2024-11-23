/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:58:56 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/26 13:42:06 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* checks for a digit (0 through 9).
*/
int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (2048);
	return (0);
}

// int	main(void)
// {
// 	for (int i = '0'; i <= '9'; i++)
// 	{
// 		printf("ft = %d / %d\n", ft_isdigit(i), isdigit(i));
// 	}
// 	return (0);
// }