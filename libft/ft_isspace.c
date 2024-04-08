#include "libft.h"

int	ft_isspace(char	ch)
{
	return ((ch >= '\t' && ch <= '\r') || ' ' == ch);
}
