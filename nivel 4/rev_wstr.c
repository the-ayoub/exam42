#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}
void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1,&str[i],1);
		i++;
	}
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int len = ft_strlen(argv[1]);
		len--;
		while (len >= 0)
		{
			if (argv[1][len - 1] == ' ' || len == 0)
			{
				ft_putstr(&argv[1][len]);
				argv[1][len - 1] = '\0';
				if(len != 0)
					write(1," ",1);
			}
			len--;
		}
	}
	write(1,"\n",1);
}
