/* 
Reproduce the behavior of the function strncpy (man strncpy).
*/


#include<unistd.h>

char    *ft_strncpy (char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*La función ft_strncpy copia hasta n caracteres de la cadena de origen (src) a la cadena de destino (dest). 
Si la longitud de src es menor que n, la función rellena el resto de dest con caracteres nulos ('\0').

Comportamiento
1. Inicialización: Se declara e inicializa un índice i a 0.

2. Copia de Caracteres: Mientras no se llegue al final de src (src[i] != '\0') y 
no se hayan copiado n caracteres (i < n), se copian los caracteres de src a dest.

3. Relleno con Caracteres Nulos: Si aún no se han copiado n caracteres, el resto de dest se rellena 
con caracteres nulos ('\0').

4. Retorno: La función devuelve el puntero dest.
*/