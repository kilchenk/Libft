/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:14:47 by kilchenk          #+#    #+#             */
/*   Updated: 2023/01/07 18:49:48 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	size_t	j;
	int		count;

	j = 0;
	while (*s)
	{
		if (*s != c && count == 0)
		{	
			j++;
			count = 1;
		}
		else if (*s == c)
		{	
			count = 0;
		}
		s++;
	}
	return (j);
}

static char	word_lenght(char const *s, char del, int len)
{

}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	char	**res;

	len = 0;
	i = 0;
	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) *(word_count(s, c) + 1));
	if (!res)
		return (NULL);
	while (i != word_count(s, c))
	{
		if (s[len] == c)
			len++;
		else
	}
}
