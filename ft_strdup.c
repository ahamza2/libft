/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:08:43 by haarab            #+#    #+#             */
/*   Updated: 2022/10/06 20:04:13 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*n;
	int		i;

	i = 0;
	n = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!n)
		return (NULL);
	while (src[i])
	{
		n[i] = src[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
