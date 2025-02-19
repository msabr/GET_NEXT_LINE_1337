/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabr <msabr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 21:16:34 by msabr             #+#    #+#             */
/*   Updated: 2025/01/03 21:25:22 by msabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strcatin(char *result, char *src, char *dst)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	while (dst[j])
	{
		result[i] = dst[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strjoin(char *src, char *dst)
{
	char	*result;

	if (!src && !dst)
		return (NULL);
	if (!dst)
		return (ft_strdup(src));
	if (!src)
		return (ft_strdup(dst));
	result = (char *)malloc(ft_strlen(src) + ft_strlen(dst) + 1);
	if (!result)
		return (NULL);
	result = ft_strcatin(result, src, dst);
	return (result);
}

char	*ft_strdup(char *str)
{
	size_t	len;
	char	*result;
	int		i;

	len = ft_strlen(str);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
	result[len] = '\0';
	return (result);
}

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t			len;
	size_t			i;

	i = 0;
	len = ft_strlen(src);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
