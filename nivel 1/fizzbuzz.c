#include <unistd.h>
int main ()
{
	int i = 1;
	char a;
	while (i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			write(1,"fizzbuzz",8);
		else if(i % 3 == 0)
			write(1,"fizz",4);
		else if(i % 5 == 0)
			write(1,"buzz",4);
		else if(i > 10)
		{
			a = i / 10 + '0';
			write(1,&a,1);
			a = i % 10 + '0';
			write(1,&a,1);
		}
		else
		{
			a = i + '0';
			write(1,&a,1);
		}
		write(1,"\n",1);
		i++;
	}
}
