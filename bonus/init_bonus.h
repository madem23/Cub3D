#ifndef INIT_BONUS_H
# define INIT_BONUS_H

# include <math.h>
# include <stdbool.h>

# include "structs_bonus.h"

void	init_cub(t_ctx *ctx);
void	init_mini_map(t_ctx *ctx);
void	draw_minimap(t_ctx *ctx);
void	init_door_img(t_ctx *ctx);
void	parse_sprite(t_ctx *ctx);
void	init_sprites_img(t_ctx *ctx);
void	get_sprites_coord(t_ctx *ctx);
void	init_sprite(t_ctx *ctx);

#endif
