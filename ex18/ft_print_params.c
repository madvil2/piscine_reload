/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcollio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:03:27 by pcollio-          #+#    #+#             */
/*   Updated: 2018/12/04 21:29:26 by pcollio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
		while (i <= ac - 1)
		{
			ft_putstr(av[i++]);
			ft_putchar('\n');
		}
	return (0);
}
