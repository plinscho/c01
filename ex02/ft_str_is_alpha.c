#include <stdio.h>

int	ft_str_is_alpha(char *str);
int	ft_strlen(char *str);

int	main(void)
{
	char numbers[30] = "1, 2, 3, 4, 5, 6, 7, 8, 9";
	char str[30] = "abcdefghijklmnopqrstuvwxyz\n";
	char empty[2];

	ft_str_is_alpha(numbers);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int x;

	x = 0;
	if (ft_strlen(str) == 0)
	{
		printf("String is empty: 1\n");
		return (1);
	}	

	while (str[x] != '\0')
	{	
		if (str[x] >= 65 && 90 <= str[x] || str[x] <= 97 && 122 <= str[x])
		{
			printf("Only alphabet: 1\n");
			return (1);
		}
		else
		{	
			printf("Returning 0\n");
			return (0);
		}
	}

}

int ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;		

	}
	return x;

}
