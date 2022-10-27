/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:02:14 by haarab            #+#    #+#             */
/*   Updated: 2022/10/09 15:27:18 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_nb(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	nb = n;
	len = ft_count_nb(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	if (nb == 0)
	{
		str[0] = '0';
	}
	if (n < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[len--] = '\0';
	while (nb != 0)
	{
		str[len--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}
