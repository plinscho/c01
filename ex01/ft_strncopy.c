#include <stdio.h>

char    *ft_strncopy(char *dest, char *src, int n);

int main(void)
{
	char str[20] = "Hello, world!";
        char dest[20];
	int arr_size;
	
	arr_size = 5;
	ft_strncopy(dest, str, arr_size);
	printf("%s", dest);
	return (0);
}

char    *ft_strncopy(char *dest, char *src, int n)
{
	int x;
	x = 0;
        while (x < n)
        {
	        dest[x] = src[x];
	        x++;
	}
	return (dest);

}

