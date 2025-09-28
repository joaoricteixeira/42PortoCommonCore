#include <stdio.h>

int ft_strncmp(const char * str1, const char * str2, size_t n)
{
	size_t	i;
	
	i = 0;
	while((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
