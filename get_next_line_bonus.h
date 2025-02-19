/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabr <msabr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:07:16 by msabr             #+#    #+#             */
/*   Updated: 2025/02/19 12:07:59 by msabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE 
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

size_t	ft_strlen(const char *s);
char	*ft_strcatin(char *result, char *src, char *dst);
char	*ft_strjoin(char *src, char *dst);
char	*ft_strdup(char *str);
size_t	ft_strlcpy(char *dst, char *src, size_t dstsize);
char	*get_next_line(int fd);
int		contains_a_new_line(char *str_buf);
int		len_to_newline(char *string);
char	*get_line_exact(char **string, int fd);
char	*read_and_join(char **buffer, int fd);

#endif
