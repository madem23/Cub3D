#include <libft.h>

#include "../utils.h"

void	check_map_line(char *line)
{
	int	i;

	i = -1;
	while (line[++i])
	{
		if (!ft_strchr("NSEW01 \n", line[i]))
		{
			free(line);
			error_exit("Error\nInvalid map format\n");
		}
	}
}

int	check_empty_line(char *line)
{
	int	i;

	i = 0;
	if (!line)
		return (0);
	while (line[i])
	{
		if (line[i] != ' ' && line[i] != '\n')
			return (1);
		i++;
	}
	return (0);
}

void	check_if_map_in_last(char **line, int fd)
{
	if (!check_empty_line(*line))
	{
		while (1)
		{
			free(*line);
			*line = get_next_line(fd);
			if (check_empty_line(*line))
			{
				free(*line);
				error_exit("Error\nMap not finishing item\n");
			}
			if (!(*line))
				break ;
		}
	}
	free(*line);
}
