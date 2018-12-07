/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcollio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 22:01:23 by pcollio-          #+#    #+#             */
/*   Updated: 2018/12/04 20:53:23 by pcollio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb == 0)
		return (res);
	else if (nb > 0)
	{
		while (nb)
			res *= nb--;
		return (res);
	}
	return (0);
}
