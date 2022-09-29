
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char *	ft_strdup(const char *s1)
{
	char	*fresh;
	int		i;
	int		j;

	i = ft_strlen(s1);
	fresh = malloc(sizeof(char) * i);
	if (!fresh)
		return (NULL);
	j = 0;
	i = 0;
	while(s1[i])
	{
		fresh[j] = s1[i];
		i++;
		j++;
	}
	fresh[j] = '\0';
	return (fresh);
}
int main(int c, char **v)
{
	printf("%s", ft_strdup(v[1]));
}
