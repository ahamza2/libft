/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:06:53 by haarab            #+#    #+#             */
/*   Updated: 2022/10/19 18:07:09 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trimmed;
	size_t		i;
	size_t		first;
	size_t		last;

	if (!s1)
		return (0);
	first = 0;
	last = ft_strlen(s1);
	while (s1[first] && is_set(s1[first], set))
		first++;
	while (last > first && is_set(s1[last - 1], set))
		last--;
	trimmed = malloc(sizeof(char) * (last - first + 1));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (first < last)
		trimmed[i++] = s1[first++];
	trimmed[i] = 0;
	return (trimmed);
}
