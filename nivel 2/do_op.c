#include <stdio.h>
#include <stdlib.h>
int main (int argc , char **argv)
{
	if (argc == 4)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[3]);
		int c;
		if(argv[2][0] == '*')
			c = a * b;			
		if(argv[2][0] == '/')
			c = a / b;			
		if(argv[2][0] == '+')
			c = a + b;			
		if(argv[2][0] == '-')
			c = a - b;
		printf("%d",c);
	}
	printf("\n");
}
