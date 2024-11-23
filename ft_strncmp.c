/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:49:49 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/26 10:44:52 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The  strncmp()  function  compares only the first (at most) n bytes of s1 and
* s2. The locale is not taken into account (for a locale-aware comparison, see
* strcoll(3)). The comparison is done using unsigned characters.
* 
* strncmp() returns an integer indicating the result of the comparison as follow:
* 
* • 0, if the s1 and s2 are equal;
* 
* • a negative value if s1 is less than s2;
* 
* • a positive value if s1 is greater than s2.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*tab_s1;
	unsigned char	*tab_s2;

	tab_s1 = (unsigned char *) s1;
	tab_s2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (--n
		&& ((*tab_s1 && *tab_s2))
		&& (*tab_s1 == *tab_s2))
	{
		tab_s1++;
		tab_s2++;
	}
	return (*tab_s1 - *tab_s2);
}
