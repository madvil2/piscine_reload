/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcollio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 19:14:52 by pcollio-          #+#    #+#             */
/*   Updated: 2018/12/04 22:24:56 by pcollio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *range;
	int len;
	int i;

	len = max - min;
	i = 0;
	if (min >= max)
		return (0);
	range = malloc((len) * sizeof(int));
	while (i < len)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
