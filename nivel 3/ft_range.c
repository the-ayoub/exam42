#include <stdlib.h>
int     *ft_range(int start, int end)
{
	int len = (start - end + 1);
	int *res = (int *)malloc(len * sizeof(int));
	if(!res)
		return (NULL);
	int i = 0;
	while(i < len)
	{
		if(start > end)
		{	
			res[i] = start;
			start--;
		}
		else 
		{
			res[i] = start;
			start++;
		}
		i++;
	}
	return(res);
}

