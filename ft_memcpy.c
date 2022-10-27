/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:43:05 by haarab            #+#    #+#             */
/*   Updated: 2022/10/09 16:29:43 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	size_t			i;
	char			*dt;
	const char		*sc;

	if (!dest && !src)
		return (0);
	i = 0;
	dt = (char *)dest;
	sc = (const char *)src;
	while (i < n)
	{
		(dt)[i] = (sc)[i];
		i++;
	}
	return (dt);
}
