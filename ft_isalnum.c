/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:05:39 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/26 13:41:30 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* checks for an alphanumeric character; it is equivalent to
* (isalpha(c) || isdigit(c)).
*/
int	ft_isalnum(int c)
{
	if (ft_isdigit(c) == 2048 || ft_isalpha(c) == 1024)
		return (8);
	return (0);
}

// int	main(void)
// {
// 	for (int i = 0; i <= 127; i++)
// 	{
// 		printf("ft = %d / %d\n", ft_isalnum(i), isalnum(i));
// 	}
// 	return (0);
// }