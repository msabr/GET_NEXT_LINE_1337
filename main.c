/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msabr <msabr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 01:32:40 by msabr             #+#    #+#             */
/*   Updated: 2025/02/17 01:35:43 by msabr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <libc.h>

int	main(void)
{
	int	fd;

	fd = open("text", O_CREAT | O_WRONLY, 777);
	write(fd, "123", 3);
	close(fd);
	fd = open("text", O_RDONLY, 777);
	printf("%s", get_next_line(fd));
	close(fd);
	return (0);
}
