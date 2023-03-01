#include <libft.h>

#include "structs.h"

void	error_exit(char *msg)
{
	ft_putstr_fd(msg, 2);
	exit(EXIT_FAILURE);
}

int	create_rgb(int r, int g, int b)
{
	return (r << 16 | g << 8 | b);
}

int	ft_close(t_ctx *ctx)
{
	mlx_destroy_window(ctx->mlx, ctx->win);
	exit (EXIT_SUCCESS);
}
