/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:11:02 by aattak            #+#    #+#             */
/*   Updated: 2023/08/27 19:28:19 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_input_error(int *str);

void	rush(int *str);

int	main(int ac, char *av[])
{
	int	i;
	int	j;
	int	str[16];

	i = 0;
	j = 0;
	while (av[1][i] && ac)
	{
		if (av[1][i] >= '0' && av[1][i] <= '9')
		{
			str[j] = av[1][i] - 48;
			j++;
		}
		j = 0;
		i++;
	}
	if (!check_input_error(str))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	rush(str);
}
