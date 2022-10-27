/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:08:56 by haarab            #+#    #+#             */
/*   Updated: 2022/10/19 18:08:59 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*len;

	if (!s)
		return (0);
	i = 0;
	len = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!len)
		return (0);
	while (s[i] != '\0')
	{
		len[i] = f(i, s[i]);
		i++;
	}
	len[i] = '\0';
	return (len);
}
