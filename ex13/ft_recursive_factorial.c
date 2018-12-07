/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcollio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 22:10:13 by pcollio-          #+#    #+#             */
/*   Updated: 2018/12/04 20:53:31 by pcollio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int res;

	res = 1;
	if (nb == 0)
		return (res);
	else if (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
