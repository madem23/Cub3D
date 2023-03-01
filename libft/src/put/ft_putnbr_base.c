#include "libft.h"

void	ft_putnbr_base(unsigned int n, char *base)
{
	if ((int)n >= ft_strlen(base))
		ft_putnbr_base(n / ft_strlen(base), base);
	ft_putchar(base[n % ft_strlen(base)]);
}
