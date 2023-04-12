/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:17:52 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/03/28 20:37:16 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *string)
{
	size_t	integer;

	integer = 0;
	while (string[integer] != '\0')
		++integer;
	return (integer);
}

char	*ft_strchr(const char *string, int symbol)
{
	if (!string)
		return (NULL);
	if (symbol == 0)
		return ((char *)(string + ft_strlen(string)));
	while (*string)
	{
		if (*string == (char)symbol)
			return ((char *)string);
		++string;
	}
	return (NULL);
}

char	*ft_strjoin(char *string1, char *string2)
{
	char	*result;
	char	*temp;
	char	*beg;

	if (!string1)
	{
		string1 = (char *)malloc(1);
		string1[0] = '\0';
	}
	if (!string1 || !string2)
		return (NULL);
	result = (char *)malloc(ft_strlen(string1) + ft_strlen(string2) + 1);
	if (!result)
		return (NULL);
	temp = result;
	beg = string1;
	while (*string1)
		*result++ = *string1++;
	while (*string2)
		*result++ = *string2++;
	*result = '\0';
	free(beg);
	return (temp);
}
