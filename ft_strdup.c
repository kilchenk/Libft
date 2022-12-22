/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 17:28:07 by kilchenk          #+#    #+#             */
/*   Updated: 2022/12/17 18:50:06 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	size;
	char	*str;

	i = 0;
	size = ft_strlen(s);
	str = malloc(size + 1);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

// int main()
// {
//     char source[] = "Geeks\0 389";
//     // A copy of source is created dynamically
//     // and pointer to copy is returned.
//     char* target = ft_strdup(source);
//     printf("%s", target);
//     return 0;
// }
