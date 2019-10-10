/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmian <dmian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:11:14 by dmian             #+#    #+#             */
/*   Updated: 2019/10/08 15:45:32 by dmian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		numlen(long n, int base)
{
	int	len;

	if (n == 0)
		return (1);
	if (n < 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= base;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = numlen(n, 10);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	else
		str[0] = '0';
	while (n != 0)
	{
		if (n < 0)
			str[--len] = ((n % 10 * -1) + '0');
		else
			str[--len] = ((n % 10) + '0');
		n /= 10;
	}
	return (str);
}
