#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, size * count);
	return (p);
}
// belleği ayırır ve bayt değerlerini 0 ile doldurur.
/*
#include<stdio.h>
int	main()
{
	printf("%p", ft_calloc(10, 30));
}*/
