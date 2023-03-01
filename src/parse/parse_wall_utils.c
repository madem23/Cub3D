#include <libft.h>
#include "../structs.h"
#include "../utils.h"
#include "parse.h"

void	check_pos(char **map, int i, int j)
{
	if (map[i - 1][j] == ' ' || map[i][j - 1] == ' ' ||
		map[i][j + 1] == ' ' || map[i + 1][j] == ' ')
		error_exit("Error\nMap is not close\n");
}

void	parse_player(t_parse *parse, char *orient, int i, int j)
{
	parse->init_pos_x = j;
	parse->init_pos_y = i;
	parse->init_dir = *orient;
	*orient = '0';
}
