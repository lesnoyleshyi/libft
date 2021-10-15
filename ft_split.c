/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:42:12 by stycho            #+#    #+#             */
/*   Updated: 2021/10/15 12:55:57 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static size_t	ft_count_words(const char *raw_str, char sp);
static char		*ft_all_mem_for_word(const char *p_to_raw_str, char term_symb);
static void		ft_copy_word(char *dst, const char *src, char term_symb);
//static char     **ft_check_leaks(char **arr_of_strings, size_t str_count);

char	**ft_split(char	const *s, char c)
{
	size_t	word_count;
	size_t	i;
	char	**splitted_words;
	char	*word;

	splitted_words = NULL;
	if (s)
	{
		word_count = ft_count_words(s, c);
		splitted_words = (char **)malloc(word_count * sizeof(char *) + 1);
		i = 0;
		while (*s && word_count)
		{
			while (*s == c)
				s++;
			word = ft_all_mem_for_word(s, c);
			splitted_words[i] = word;
			ft_copy_word(word, s, c);
			while (*s != c)
				s++;
			i++;
			word_count--;
		}
		splitted_words[i] = NULL;
//		splitted_words = ft_check_leaks(splitted_words, i);
	}
	return (splitted_words);
}

static size_t	ft_count_words(const char *raw_str, char sp)
{
	size_t	count;

	count = 0;
	while (*raw_str)
	{
		if (*raw_str == sp)
			raw_str++;
		else
		{
			count++;
			while (*raw_str != sp && *raw_str != '\0')
				raw_str++;
		}
	}
	return (count);
}

static char	*ft_all_mem_for_word(const char *p_to_raw_str, char term_symb)
{
	char		*p_to_blank_word;
	const char	*copy_ptrawstr;
	size_t		w_len;

	copy_ptrawstr = p_to_raw_str;
	w_len = 0;
	while (*copy_ptrawstr++ != term_symb)
		w_len++;
	p_to_blank_word = (char *)ft_calloc((w_len + 1), sizeof(char));
	return (p_to_blank_word);
}

static void	ft_copy_word(char *dst, const char *src, char term_symb)
{
	char	*copy_src;

	copy_src = (char *)src;
	while (*copy_src != term_symb)
		*dst++ = *copy_src++;
}

//static char     **ft_check_leaks(char **arr_of_strings, size_t str_count)
//{
//    size_t check_count;
//
//    check_count = str_count;
//    while (--check_count)
//    {
//        if (arr_of_strings[check_count] == NULL)
//        {
//            while (str_count)
//            {
//                free(arr_of_strings[str_count - 1]);
//                str_count--;
//            }
//            return (NULL);
//        }
//    }
//    return (arr_of_strings);
//}