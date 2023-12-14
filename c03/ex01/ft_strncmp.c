/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 21:34:02 by aattak            #+#    #+#             */
/*   Updated: 2023/08/26 16:27:06 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > 0)
	{
		if (s1[i] != s2[i])
		{
			nb = s1[i] - s2[i];
			return (nb);
		}
		i++;
		n--;
	}
	return (nb);
}