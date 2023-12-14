/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:38:52 by aattak            #+#    #+#             */
/*   Updated: 2023/08/29 22:49:53 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;

	while (ac > 1)
	{
		while (av[ac - 1][i])
		{
			ft_putchar(av[ac - 1][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		ac--;
	}
}
