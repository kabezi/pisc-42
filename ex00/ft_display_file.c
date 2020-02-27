/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvirolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:38:52 by kvirolai          #+#    #+#             */
/*   Updated: 2020/02/20 20:08:40 by kvirolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1000

void	ft_display_file(char *argv)
{
	int fd;
	char*a[BUF_SIZE];

	fd = open(argv, O_RDONLY);
	if (fd < 0)
	{
		write(2, "File not found\n", 18);
		return ;
	}
	while (read(fd, a, BUF_SIZE) != 0)
		write(1, a, BUF_SIZE);
	close(fd);
}

int		main(int argc, char *argv[])
{
	if (argc <= 1)
		write(2, "File name missing\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments\n", 20);
	else
		ft_display_file(argv[1]);
	return (0);
}
