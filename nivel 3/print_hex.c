#include <unistd.h>
int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result);
}
int hex (int num)
{
	char *base = "0123456789abcdef";
	if(num >= 16)
		hex(num /16);
	write (1,&base[num % 16],1);
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		hex(num);
	}
	write(1,"\n",1);
}
