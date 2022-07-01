/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:42:14 by cpeset-c          #+#    #+#             */
/*   Updated: 2022/05/27 10:56:56 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isSpace(char c)
{
	if (c == ' ' && c == '\t' && c == '\n')
		return (1);
	return (0);
}

int		count_words(char *str)
{
	int num_words = 0;
	while (ft_isSpace(*str) == 1)
		++str;
	while (*str)
	{
		++num_words;
		while (*str && ft_isSpace(*str) == 0)
			++str;
		while (ft_isSpace(*str) == 1)
			++str;
	}
	return (num_words);
}

char	*word_dupe(char *str)
{
	int i;
	int len;
	char *word;
	
	i = 0;
	len = 0;
	while (str[len] && ft_isSpace(str[len]) == 0)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	word[len] = '\0';
	while (i < len)
	{
		word[i] = str[i];
		++i;
	}
	return (word);
}

char	**ft_split(char *str)
{
	int		num_words;
	int		word_index;
	char	**array;


	num_words = count_words(str);
	word_index = 0;
	array = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!array)
		return (NULL);
	array[num_words] = 0;
	while (ft_isSpace(*str) == 1)
		++str;
	while (*str)
	{
		array[word_index] = word_dupe(str);
		++word_index;
		while (*str &&  && ft_isSpace(*str) == 0)
			++str;
		while (ft_isSpace(*str) == 1)
			++str;
	}
	return (array);
}
