#include <stdlib.h>
int cont_world(int nbr)
{
	int i = 0;
	if(nbr <= 0)
	{
		nbr = -nbr;
		i++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}
char	*ft_itoa(int nbr)
{
	int i = cont_world(nbr);
	char *str = malloc(i + 1);
	str[0] = '-';
	str[i] = '\0';
	i--;
	if(nbr == 0)
		str[0] = '0';
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		str[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	return(str);
}
