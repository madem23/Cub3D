#include "libft.h"

int	ft_strlen_int(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putchar_size(char c)
{
	ft_putchar(c);
	return (1);
}

int	ft_putstr_size(const char *s)
{
	if (!s)
		return (0);
	ft_putstr(s);
	return (ft_strlen_int(s));
}
