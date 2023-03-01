#include <libft.h>
#include "utils.h"
#include "init.h"
#include "structs.h"
#include "parse/parse.h"
#include "draw/draw.h"

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
