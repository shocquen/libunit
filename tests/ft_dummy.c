/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dummy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shocquen <shocquen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:34:43 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 22:45:33 by shocquen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

static void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

static void	ft_bus_errorer(char *str)
{
	while (*str)
		*(str++) = 0;
}

char	ft_dummy(long long i)
{
	static char	str[] = "Hello World!";
	char		*ptr;

	ptr = str;
	if (i <= 2)
		return (++i);
	else if (i == 3)
	{
		ft_memset((char *)0x0, 1, 100);
	}
	else if (i >= 4)
		ft_bus_errorer("Hello World!");
	return (0);
}
