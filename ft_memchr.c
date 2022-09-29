

#include <stdio.h>

void * ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while(n > 0)
	{
	   if (*s == (unsigned char)c)
		   return (s);
		s++;
		n--;
	}
	return(NULL);
}
int main(void)
{
	char str[10] = "whello";
	printf("%s", ft_memchr(str, 'h', 4));
}
