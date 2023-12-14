/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:06:17 by aattak            #+#    #+#             */
/*   Updated: 2023/09/06 15:37:18 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*rst;

	rst = (char *) malloc((ft_strlen(src) * sizeof(char)) + 1);
	if (rst == NULL)
		return (NULL);
	return (ft_strcpy(rst, src));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*my_stock;

	my_stock = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (my_stock == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		my_stock[i].size = ft_strlen(av[i]);
		my_stock[i].str = av[i];
		my_stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	my_stock[i].str = 0;
	return (my_stock);
}
