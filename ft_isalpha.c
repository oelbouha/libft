#include <stdio.h>

int	ft_isalpha(int s)
{
		if (!((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z')))
				return (0);
		else
			return (1);
}
int main()
{
	printf("%d", ft_isalpha(4));
}
