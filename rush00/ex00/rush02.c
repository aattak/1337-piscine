/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:47:24 by aattak            #+#    #+#             */
/*   Updated: 2023/08/20 16:32:21 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

//this function print a string.
void	ft_print_str(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

//this function print the first row.
void	ft_rush_first(int col, int x)
{
	if (col == 1 || col == x)
		ft_putchar('A');
	else
		ft_putchar('B');
}

//this function print the middle rows.
void	ft_rush_middle(int col, int x)
{
	if (col == 1 || col == x)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

//this function print the last row.
void	ft_rush_last(int col, int x)
{
	if (col == 1 || col == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

//this function print row by row.
void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	col = 1;
	if (x <= 0 || y <= 0)
		ft_print_str("Input Error: You can only use values > 0 as input.\n");
	while (row <= y && x > 0 && y > 0)
	{
		while (col <= x)
		{
			if (row == 1)
				ft_rush_first(col, x);
			else if (row > 1 && row < y)
				ft_rush_middle(col, x);
			else
				ft_rush_last(col, x);
			col++;
		}
		ft_putchar('\n');
		col = 1;
		row++;
	}
}
