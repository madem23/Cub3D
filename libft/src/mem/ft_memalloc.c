#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem_zone;

	mem_zone = (void *)malloc(size);
	if (!mem_zone)
		return (NULL);
	ft_bzero(mem_zone, size);
	return (mem_zone);
}
