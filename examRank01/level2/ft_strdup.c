#include <stdlib.h>

int	ft_strlen(char *s)
{
	ssize_t	i;

	i = -1;
	while (s[++i]);
	return (i);
}

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*dst;

	if (!src)
		return (NULL);
	len = ft_strlen(src);
	dst = (char *)malloc(sizeof(char) * len + 1);
	if (!dst)
		return (NULL);
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (dst);
}
