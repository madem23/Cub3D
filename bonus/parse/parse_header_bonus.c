#include <libft.h>

#include "../structs_bonus.h"
#include "../utils_bonus.h"
#include "parse_bonus.h"

int	create_rgb(int r, int g, int b)
{
	return (r << 16 | g << 8 | b);
}

int	check_int_color(char *str)
{
	int	i;
	int	n;

	i = 0;
	if (str[0] == '-')
		error_exit("Error\nInvalid RGB code\n");
	while (str[0] == '0' && ft_isdigit(str[1]))
		str++;
	while (ft_isdigit(str[i]))
		i++;
	if (i > 3)
		error_exit("Error\nInvalid RGB code\n");
	n = ft_atoi(str);
	if (n > 255)
		error_exit("Error\nInvalid RGB code\n");
	return (n);
}

int	check_colors(char *color)
{
	int	i;
	int	r;
	int	g;
	int	b;

	i = -1;
	r = check_int_color(color);
	while (ft_isdigit(color[++i]))
		;
	if (!(color[i] == ',' && ft_isdigit(color[i + 1])))
		error_exit("Error\nInvalid color code\n");
	i++;
	g = check_int_color(color + i)
		;
	while (ft_isdigit(color[++i]))
		;
	if (!(color[i] == ',' && ft_isdigit(color[i + 1])))
		error_exit("Error\nInvalid color code\n");
	i++;
	b = check_int_color(color + i);
	while (ft_isdigit(color[++i]))
		;
	return (create_rgb(r, g, b));
}

void	parse_header(t_parse *parse, char **line, int fd)
{
	while (1)
	{
		*line = get_next_line(fd);
		if (!(*line))
		{
			free(*line);
			error_exit("Error\nInvalid map format\n");
		}
		check_line(parse, *line);
		if (parse->c && parse->e && parse->f && parse->n
			&& parse->s && parse->w)
			break ;
		free(*line);
	}
	check_open_file(parse);
	free(*line);
}
