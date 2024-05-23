/* Create a function that returns 1 if the string given as a parameter contains only 
alphabetical characters, and 0 if it contains any other character.*/

#include<unistd.h>

int ft_str_is_alpha(char *str)

{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}