/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_error.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:08:02 by aattak            #+#    #+#             */
/*   Updated: 2023/08/27 15:12:52 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_corners_input(int *str)
{
	int	cor1;
	int	cor2;
	int	cor3;
	int	cor4;

	cor1 = ((str[0] == 1 && str[8] != 1) || (str[8] == 1 && str[0] != 1));
	cor2 = ((str[3] == 1 && str[12] != 1) || (str[12] == 1 && str[3] != 1));
	cor3 = ((str[7] == 1 && str[15] != 1) || (str[15] == 1 && str[7] != 1));
	cor4 = ((str[4] == 1 && str[11] != 1) || (str[11] == 1 && str[4] != 1));
	if (cor1 || cor2 || cor3 || cor4)
		return (0);
	return (1);
}

int	check_rows_input(int *str)
{
	int	row1;
	int	row2;
	int	row3;
	int	row4;

	row1 = (str[8] + str[12] < 3 || str[8] + str[12] > 5);
	row2 = (str[9] + str[13] < 3 || str[9] + str[13] > 5);
	row3 = (str[10] + str[14] < 3 || str[10] + str[14] > 5);
	row4 = (str[11] + str[15] < 3 || str[11] + str[15] > 5);
	if (row1 || row2 || row3 || row4)
		return (0);
	return (1);
}

int	check_col_input(int *str)
{
	int	col1;
	int	col2;
	int	col3;
	int	col4;

	col1 = (str[0] + str[4] < 3 || str[0] + str[4] > 5);
	col2 = (str[1] + str[5] < 3 || str[1] + str[5] > 5);
	col3 = (str[2] + str[6] < 3 || str[2] + str[6] > 5);
	col4 = (str[3] + str[7] < 3 || str[3] + str[7] > 5);
	if (col1 || col2 || col3 || col4)
		return (0);
	return (1);
}

int	check_input_error(int *str)
{
	int	cor_err;
	int	row_err;
	int	col_err;

	cor_err = (check_corners_input(str));
	row_err = (check_rows_input(str));
	col_err = (check_col_input(str));
	if (cor_err && row_err && col_err)
		return (1);
	return (0);
}
