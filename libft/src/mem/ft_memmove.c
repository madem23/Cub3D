#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	size_t			i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	if (dst > src)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		while (len > i)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
