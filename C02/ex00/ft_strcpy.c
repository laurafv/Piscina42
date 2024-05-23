/* Reproduce the behavior of the function strcpy (man strcpy).*/

#include<unistd.h>

char    *ft_strncpy(char    *dest, char *src)

{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* La función ft_strcpy copia una cadena de caracteres desde src a dest. 
Utiliza un índice i para recorrer cada carácter de la cadena src, copiándolos uno por uno en la cadena 
dest hasta llegar al final de la cadena ('\0'). Luego, añade el carácter nulo '\0' al final de dest y 
devuelve el puntero a dest.*/