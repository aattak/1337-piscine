/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:41:55 by aattak            #+#    #+#             */
/*   Updated: 2023/08/24 21:29:34 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lowcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_is_upcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_is_first(char c)
{
	if (ft_is_lowcase(c) || ft_is_upcase(c) || ft_is_numeric(c))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && ft_is_lowcase(str[i]))
			str[i] -= 32;
		else if (i != 0)
		{
			if (ft_is_first(str[i - 1]) && ft_is_lowcase(str[i]))
				str[i] -= 32;
			else if (!ft_is_first(str[i - 1]) && ft_is_upcase(str[i]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
