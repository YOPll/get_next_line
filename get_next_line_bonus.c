/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yopi <mrx.ga10@gmail.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 03:00:04 by yopi              #+#    #+#             */
/*   Updated: 2021/12/11 23:52:39 by yopi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_checker(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (-42);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (-42);
	return (i);
}

char	*ft_putline(char *keeper)
{
	char	*r_line;
	int		size;

	if (!keeper)
		return (NULL);
	size = ft_checker(keeper);
	if (ft_checker(keeper) == -42)
		return (ft_strdup(keeper));
	r_line = (char *)malloc(sizeof(char) * (size + 2));
	if (!r_line)
		return (NULL);
	ft_memmove(r_line, keeper, size);
	r_line[size] = '\n';
	r_line[size + 1] = '\0';
	return (r_line);
}

char	*ft_backup(char *keeper)
{
	int	size;
	int	len;

	if (!keeper)
		return (NULL);
	len = ft_strlen(keeper);
	size = ft_checker(keeper);
	if (size == -42 || (size - len) == -1)
		return (free(keeper), NULL);
	keeper = ft_substr(keeper, (size + 1), (len - size - 1));
	return (keeper);
}

char	*get_next_line(int fd)
{
	static char	*keeper[1024];
	char		*str;
	int			r_read;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!str)
		return (NULL);
	while (ft_checker(keeper[fd]) == -42)
	{
		r_read = read(fd, str, BUFFER_SIZE);
		if (r_read <= 0)
			break ;
		str[r_read] = 0;
		keeper[fd] = ft_strjoin(keeper[fd], str);
	}
	free(str);
	line = ft_putline(keeper[fd]);
	keeper[fd] = ft_backup(keeper[fd]);
	return (line);
}
