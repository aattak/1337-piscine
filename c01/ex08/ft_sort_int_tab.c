/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:51:18 by aattak            #+#    #+#             */
/*   Updated: 2023/08/21 18:00:46 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		min = tab[i];
		while (j < size)
		{
			if (min > tab[j])
			{
			tmp = tab[j];
			tab[j] = min;
			min = tmp;
			}
			j++;
		}
		tab [i] = min;
		i++;
	}
}
