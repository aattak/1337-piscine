/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:45:49 by aattak            #+#    #+#             */
/*   Updated: 2023/08/28 20:27:07 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_base_size(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_size;
	long int	nb;

	nb = (long int)nbr;
	base_size = ft_base_size(base);
	if (!base_size)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < base_size)
		ft_putchar(base[nb]);
	else
	{
		ft_putnbr_base(nb / base_size, base);
		ft_putnbr_base(nb % base_size, base);
	}
}
