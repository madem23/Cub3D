#ifndef UTILS_BONUS_H
# define UTILS_BONUS_H

# include "structs_bonus.h"

void	error_exit(char *msg);
int		get_time(void);
int		get_cur_time(t_ctx *ctx);
void	print_background_minimap(t_ctx *ctx, int scale);
void	init_screen_buffer(t_ctx *ctx);

#endif