#include <stdio.h>

char	*ft_strcopy(char *dest, char *src);

int main(void)
{
	char str[20] = "Hello, world!\n";
	char dest[20];


	ft_strcopy(dest, str);
	printf("%s", dest);
	return (0);
}

char    *ft_strcopy(char *dest, char *src)
{
	int x;

	x = 0;
	while (src[x] != '\0')
 	{
		dest[x] = src[x];
		x++;
	}		
	return (dest);

}

