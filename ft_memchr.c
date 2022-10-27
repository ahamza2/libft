/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:47:48 by haarab            #+#    #+#             */
/*   Updated: 2022/10/09 16:02:41 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int			i;
	unsigned char			*st;

	st = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (st[i] == (unsigned char )c)
		{
			return (&st[i]);
		}
		i++;
	}
	return (0);
}
