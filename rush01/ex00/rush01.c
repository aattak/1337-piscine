/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 13:38:49 by aattak            #+#    #+#             */
/*   Updated: 2023/08/27 19:32:34 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_2d_array(int	*str[]);

char	*views_str(void)
{
}

void	fill_arr_rows(int *views, int *str, int *rst)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 8;
	j = 0;
	k = 0;
	while (i < 16)
	{
		while (views[j][0])
		{
			if (views[j][0] == (str[i] * 10) + str[i + 4])
			{
				while (k < 4)
				{
					rst[i - 8][k] = views[j][k + 1];
					k++;
				}
			}
			j++;
		}
		i++;
	}
}

void	fill_arr_cols(int *views, int *str, int *rst)
{
}

void	check_arr_cells(int *rst)
{
}

void	rush(int *str)
{
	int	rst[4][4];
	int	views[9][5];

	views = views_str();
	fill_arr_rows(views, str, rst);
	fill_arr_cols(views, str, rst);
	check_arr_cells(rst);
	print_2d_array(rst);
}
