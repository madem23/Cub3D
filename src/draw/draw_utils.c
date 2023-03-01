#include <libft.h>

#include "../structs.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	if (x > 0 && x < WIDTH && y > 0 && y < HEIGHT)
	{
		dst = data->addr + (y * data->line_len + x * (data->bpp / 8));
		*(unsigned int *)dst = color;
	}
}

void	change_pos(t_ctx *ctx, float a, float b)
{
	ctx->player.pos_x = ctx->player.pos_x + a;
	ctx->player.pos_y = ctx->player.pos_y + b;
}
