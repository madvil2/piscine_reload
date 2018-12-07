/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcollio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 17:13:24 by pcollio-          #+#    #+#             */
/*   Updated: 2018/12/04 23:29:35 by pcollio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((unsigned char)s1[i] != '\0' || (unsigned char)s2[i] != '\0')
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			if ((unsigned char)s1[i] > (unsigned char)s2[i])
				return (1);
			else
				return (-1);
		}
		i++;
	}
	if ((unsigned char)s1[i] == '\0' ^ (unsigned char)s2[i] == '\0')
	{
		if ((unsigned char)s1[i] == '\0')
			return (-1);
		else
			return (1);
	}
	return (0);
}

void	print(char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int		j;
	char	*c;

	j = 1;
	if (ac > 1)
	{
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				c = av[j];
				av[j] = av[j + 1];
				av[j + 1] = c;
				j = 1;
			}
			else
				j++;
		}
		j = 1;
		while (j < ac)
			print(av[j++]);
	}
	return (0);
}
