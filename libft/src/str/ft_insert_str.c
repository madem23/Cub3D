#include "libft.h"

char	*ft_insert_str(char *s, char *ins, int pos)
{
	char	*new;
	char	*swap;
	int		len;

	swap = ft_strnew(ft_strlen(s));
	ft_strncpy(swap, s, pos);
	len = ft_strlen(swap);
	ft_strcpy(swap + len, ins);
	len += ft_strlen(ins);
	ft_strcpy(swap + len, s + pos);
	new = ft_strcpy (s, swap);
	free (swap);
	return (new);
}
