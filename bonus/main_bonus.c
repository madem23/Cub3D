#include <libft.h>

#include "utils_bonus.h"
#include "init_bonus.h"
#include "structs_bonus.h"
#include "parse/parse_bonus.h"
#include "draw/draw_bonus.h"

int	main(int argc, char **argv)
{
	t_ctx	ctx;

	if (argc != 2)
		error_exit("error: too few arguments\n");
	ft_bzero(&ctx, sizeof(t_ctx));
	ctx.parse = parse(argv[1]);
	init_cub(&ctx);
	take_instructions_and_draw(&ctx);
	mlx_loop(ctx.mlx);
	return (0);
}
