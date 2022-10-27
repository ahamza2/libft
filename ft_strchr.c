/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:46:32 by haarab            #+#    #+#             */
/*   Updated: 2022/10/09 17:36:35 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	chr;

	str = (char *)s;
	chr = c;
	while (*str != chr)
	{
		if (*str == '\0')
		{
			return (0);
		}
		str++;
	}
	return (str);
}
