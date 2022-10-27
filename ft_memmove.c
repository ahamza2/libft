/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:17:17 by haarab            #+#    #+#             */
/*   Updated: 2022/10/12 14:25:17 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	j;

	j = 0;
	if (dst == NULL && src == NULL)
		return (0);
	s = (char *)src;
	d = (char *)dst;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (j < len)
		{
			d[j] = s[j];
			j++;
		}
	}
	return (dst);
}
