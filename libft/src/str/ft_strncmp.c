#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < (size - 1)))
		i++;
	return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
}
