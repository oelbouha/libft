
#include <string.h>
int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				i;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while(*s1 || *s2 && n >= 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		n--;
		s1++;
		s2++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>
int main (int c, char **v)
{
	char v1[8] = "hi";
	char v2[8] = "aaa";
	char v3[8] = "hi";
	char v4[8] = "aaa";
	printf("%d\n", ft_memcmp(v[1], v[2], 3));
	printf("%d\n", memcmp(v[3], v[4], 3));
}
