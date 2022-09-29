
#include <stdio.h>
char *	ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	i--;
	while(i >= 0)
	{
	   if (s[i] == c)
		   return ((char*)&s[i]);
		i--;
	}
	return(NULL);
}
int main(void)
{
	char str[100] = "wwwhellohiii";
	printf("%s", ft_strrchr(str, 'h'));
	return (0);
}
