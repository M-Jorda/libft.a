/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:03:17 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/26 13:27:35 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_posneg(const char *nptr, int i)
{
	if (nptr[i] == 43)
		return (0);
	return (1);
}

/*
* The atoi() function converts the initial portion of the string pointed to by
* nptr to int. The behavior is the same as strtol(nptr, NULL, 10); 
* except that atoi() does not detect errors.
*/
int	ft_atoi(const char *nptr)
{
	int	i;
	int	atoi;
	int	neg;

	i = 0;
	atoi = 0;
	if (nptr[i] == 92)
		return (atoi);
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		neg = ft_posneg(nptr, i);
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		atoi *= 10;
		atoi += nptr[i] - '0';
		i++;
	}
	if (neg == 1)
		atoi *= -1;
	return (atoi);
}

/* int	main()
{
	printf("%d\n", ft_atoi("-56843584473384484"));
	printf("%d\n", atoi("-5684358443737684484"));
	return (0);
} */