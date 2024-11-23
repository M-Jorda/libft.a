/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:57:58 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/26 13:41:40 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}

static int	ft_islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

/*
* checks  for an alphabetic character; in the standard "C" locale, it is
* equivalent to (isupper(c) || islower(c)).  In some locales, there may be
* additional characters for which isalpha() is true—letters which are neither
* uppercase nor lowercase.
*/
int	ft_isalpha(int c)
{
	if (ft_islower(c) == 1 || ft_isupper(c) == 1)
		return (1024);
	return (0);
}
