/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:29:21 by haarab            #+#    #+#             */
/*   Updated: 2022/10/09 17:41:00 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dest;
	size_t			len1;
	size_t			len2;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	dest = (char *)malloc(sizeof(char) * (len1 + len2 +1));
	if (!dest)
		return (NULL);
	while (i < len1)
		dest[j++] = s1[i++];
	i = 0;
	while (i < len2)
		dest[j++] = s2[i++];
	dest[j] = '\0';
	return (dest);
}
