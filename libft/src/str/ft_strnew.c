#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new_str;

	new_str = (char *)ft_memalloc(sizeof(char) * (size + 1));
	if (!new_str)
		return (NULL);
	return (new_str);
}
