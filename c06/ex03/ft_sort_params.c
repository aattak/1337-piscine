/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:52:02 by aattak            #+#    #+#             */
/*   Updated: 2023/08/30 08:42:09 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			nb = s1[i] - s2[i];
			return (nb);
		}
		i++;
	}
	return (nb);
}

void	ft_sort_params(int ac, char *str[])
{
	int		i;
	int		j;
	char	*min;
	char	*tmp;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		min = str[i];
		while (j < ac)
		{
			if (ft_strcmp(min, str[j]) > 0)
			{
				tmp = str[j];
				str[j] = min;
				min = tmp;
			}
			j++;
		}
		str[i] = min;
		i++;
	}
}

int	main(int ac, char *av[])
{
	int		i;
	int		j;

	ft_sort_params(ac, av);
	i = 1;
	j = 0;
	while (i < ac)
	{
		while (av[i][j])
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
	return (0);
}
