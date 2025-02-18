#include <unistd.h>
int ft_atoi(char *str)
{
	int result = 0;
	int i = 0;
	while (str[i])
	{
		result = result * 10 +(str[i] - '0');
		i++;
	}
	return (result);
}
void ft_putnbr (int n)
{
	char c;
	if (n >= 10)
	{
		ft_putnbr( n / 10);
	}
	c = (n % 10) + '0'; 
	write(1,&c,1);
}
int main (int argc, char **argv)
{
	if(argc != 2)
	{
		write(1,"0",1);
	}
	if (argc == 2 && argv[1][0] != '-')
	{
		int a = ft_atoi(argv[1]);
		int i = 0;
		int b = 0;

		while (i <= a)
		{
			if (i == 2 || i == 3 || i == 5)
				b = b + i;
			if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i != 1)
				b = b + i;
			i++;
		}
		ft_putnbr(b);

	}
	write(1,"\n",1);
}
