/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:13:25 by aattak            #+#    #+#             */
/*   Updated: 2023/09/06 08:18:20 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int	ft_join_len(int size, char **strs, char *sep)
{
	int	i;
	int	join_len;

	if (size == 0)
		return (1);
	i = 0;
	join_len = 0;
	while (i < size)
	{
		join_len += ft_strlen(strs[i]);
		i++;
	}
	join_len += (ft_strlen(sep) * (size - 1)) + 1;
	return (join_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		join_len;
	char	*join;

	join_len = ft_join_len(size, strs, sep);
	join = (char *) malloc(join_len * sizeof(char));
	if (join == NULL)
		return (NULL);
	join[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(join, strs[i]);
		if (i < size - 1)
			ft_strcat(join, sep);
		i++;
	}
	return (join);
}
