

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;
	unsigned int	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = ft_strlen(dest);
	j = 0;
	if (size == 0)
		return (src_len);
	while (src[j] != '\0' && i < size -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < dest_len)
	{
		return (src_len + size);
	}
	else
		return (dest_len + src_len);
}
#include <stdio.h>
#include <string.h>
int main(void)
{
	char dst[10] = "hi";
	char src[10] = "hello";
	char d[10] = "hi";
	char s[10] = "hello";
	//printf("%d\n", ft_strlcat(dst, src, 5));
	//printf("%s\n", dst);
	//printf("%d\n", ft_strlcat(dst, src, 2));
	//printf("%s\n", dst);
	printf("%d\n", ft_strlcat(dst, src, 4));
	printf("%lu\n", strlcat(d, s, 4));
	printf("%s", dst);
}
