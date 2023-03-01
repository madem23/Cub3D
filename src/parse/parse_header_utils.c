#include <libft.h>
#include <fcntl.h>

#include "../structs.h"
#include "../utils.h"

void	check_open_file(t_parse *parse)
{
	if (open(parse->no, O_RDONLY) == -1)
		error_exit("Error\nInvalid texture file name\n");
	if (open(parse->so, O_RDONLY) == -1)
		error_exit("Error\nInvalid texture file name\n");
	if (open(parse->ea, O_RDONLY) == -1)
		error_exit("Error\nInvalid texture file name\n");
	if (open(parse->we, O_RDONLY) == -1)
		error_exit("Error\nInvalid texture file name\n");
}

char	*add_arg(char *s, int size)
{
	int		i;
	int		j;
	char	*ret;

	i = -1;
	ret = ft_calloc(sizeof(char), size + 1);
	while (s[++i] == ' ')
		;
	j = 0;
	while (s[i] && (s[i] != ' ' && s[i] != '\n' && s[i] != '\0'))
		ret[j++] = s[i++];
	return (ret);
}
