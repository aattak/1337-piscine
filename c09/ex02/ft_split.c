/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aattak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:40:28 by aattak            #+#    #+#             */
/*   Updated: 2023/09/07 22:31:53 by aattak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_sep_checker(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_word_counter(char *str, char *charset)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	if (!ft_sep_checker(str[i], charset))
		nb_words++;
	if (str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		if (!ft_sep_checker(str[i], charset)
			&& ft_sep_checker(str[i - 1], charset))
			nb_words++;
		i++;
	}
	return (nb_words);
}

int	ft_word_len(char *str, char *charset, int i)
{
	int	len;

	len = 0;
	while (str[i] != '\0' && !ft_sep_checker(str[i], charset))
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_word(char *str, char *charset, int i)
{
	int		j;
	int		word_len;
	char	*word;

	word_len = ft_word_len(str, charset, i);
	word = (char *) malloc(word_len + 1);
	if (word == NULL)
		return (NULL);
	j = 0;
	while (j < word_len)
	{
		word[j] = str[i];
		i++;
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		nb_words;
	char	**str_split;

	nb_words = ft_word_counter(str, charset);
	str_split = (char **) malloc(sizeof(char *) * (nb_words + 1));
	if (str_split == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_sep_checker(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			str_split[j] = ft_word(str, charset, i);
			j++;
		}
		while (str[i] != '\0' && !ft_sep_checker(str[i], charset))
			i++;
	}
	str_split[j] = 0;
	return (str_split);
}
