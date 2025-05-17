/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 18:07:48 by marlouba          #+#    #+#             */
/*   Updated: 2025/05/17 05:11:20 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*lecture(char *stock_line, int fd)
{
	char	*buffer;
	int		bytes_read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(buffer), free(stock_line), NULL);
		buffer[bytes_read] = '\0';
		stock_line = ft_strjoin_gnl(stock_line, buffer);
		if (ft_strchr_gnl(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (stock_line);
}

int	line_len(char *stock_line)
{
	int	i;

	i = 0;
	if (stock_line)
	{
		while (stock_line[i])
		{
			if (stock_line[i] == '\n')
				return (i + 1);
			i++;
		}
	}
	return (i);
}

char	*extract_line(char *stock_line)
{
	char	*res_line;
	int		i;

	i = 0;
	res_line = NULL;
	if (!stock_line[0])
		return (NULL);
	res_line = malloc(ft_strlen(stock_line) + 1);
	if (!res_line)
		return (NULL);
	while (stock_line[i] && stock_line[i] != '\n')
	{
		res_line[i] = stock_line[i];
		i++;
	}
	if (stock_line[i] == '\n')
		res_line[i++] = '\n';
	res_line[i] = '\0';
	return (res_line);
}

char	*clear_stockline(char *stock_line)
{
	char	*new;
	int		i;
	int		lenght;
	int		start_stock;

	new = NULL;
	start_stock = line_len(stock_line);
	i = 0;
	lenght = ft_strlen(stock_line) - line_len(stock_line);
	if (!lenght)
		return (free(stock_line), NULL);
	new = malloc(lenght + 1);
	if (!new)
		return (NULL);
	while (stock_line[start_stock] != '\0')
	{
		new[i] = stock_line[start_stock++];
		i++;
	}
	new[i] = '\0';
	free(stock_line);
	return (new);
}

char	*get_next_line(int fd)
{
	static char	*stock_line = NULL;
	char		*line;

	line = NULL;
	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	stock_line = lecture(stock_line, fd);
	if (!stock_line)
		return (NULL);
	line = extract_line(stock_line);
	stock_line = clear_stockline(stock_line);
	if (!line)
		return (free(stock_line), NULL);
	return (line);
}

// int	main(void)
// {
// 	int		fd;
// 	char	*line;

// 	fd = open("test.txt", O_RDONLY);
// 	if (fd == -1)
// 	{
// 		printf("Erreur");
// 		return (0);
// 	}
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	close(fd);
// 	return (0);
// }
