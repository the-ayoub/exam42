#include <stdlib.h>
void ft_strncpy(char *dest, char *str ,int len)
{
	int i = 0;
	while (str[i] && len > i)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
}
char    **ft_split(char *str)
{
	int i = 0;
	int count = 0;
	int j = 0;
	int k = 0;
	char **src;

	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
			count++;
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	src = (char **)malloc((count + 1)* sizeof(char *));
	i = 0;
	while (str[i])
	{
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		j = i;
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		src[k] = malloc((i - j + 1));
		ft_strncpy(src[k++],&str[j],i - j);
		i++;
	}
	src[k] = NULL;
	return(src);
}

