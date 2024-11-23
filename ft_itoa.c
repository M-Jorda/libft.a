/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:53:34 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/27 11:17:33 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countnbr(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_iteoa(char *num, long long_n, int len)
{
	while (long_n > 0)
	{
		num[--len] = (long_n % 10) + '0';
		long_n /= 10;
	}
}

/*
* Allocates (with malloc(3)) and returns a string representing the integer
* received as an argument. Negative numbers must be handled.
*/
char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	long	long_n;

	long_n = (long) n;
	len = ft_countnbr(long_n);
	num = (char *) malloc((len + 1) * sizeof(char));
	if (!num)
		return (NULL);
	num[len] = '\0';
	if (long_n < 0)
	{
		num[0] = '-';
		long_n *= -1;
	}
	else if (n == 0)
		num[0] = '0';
	ft_iteoa(&num[0], long_n, len);
	return (num);
}

/* int	main(int argc, char **argv)
{
	(void) argc;
	printf("%s", ft_itoa(-2147483648));
	return (0);
} */
