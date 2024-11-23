/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <jjorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:21:54 by jjorda            #+#    #+#             */
/*   Updated: 2024/09/26 10:48:13 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_majall(unsigned int i, char *c)
{
	unsigned int	j;

	j = 0;
	if (i % 2 == 0)
	{
		while (c[j])
		{
			if (c[j] >= 97 && c[j] <= 122)
				c[j] -= 32;
			else if (c[j] >= 65 && c[j] <= 90)
				c[j] += 32;
			j++;
		}
	}
} */

/*
* Applies the function ’f’ on each character of the string passed as argument,
* passing its index as first argument. Each character is passed by address to
* ’f’ to be modified if necessary.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* int	main(int argc, char **argv)
{
	(void) argc;
	ft_striteri(argv[1], ft_majall);
	printf("%s", argv[1]);
	return (0);
} */