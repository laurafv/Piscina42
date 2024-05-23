/* Create a function that displays a string of characters on the standard output.
*/

#include <unistd.h>
void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}

/* #include <unistd.h>: Esta línea incluye la biblioteca unistd.h. 
Esta biblioteca proporciona acceso a la función write() y otras funciones relacionadas con el sistema de archivos y 
la gestión de procesos en sistemas operativos basados en Unix.

void ft_putstr(char *str): Aquí se declara una función llamada ft_putstr que toma un puntero a un carácter (una cadena de caracteres)
como argumento y no devuelve ningún valor (void). Esta función está diseñada para imprimir la cadena de caracteres en la salida estándar.

unsigned int i;: Se declara una variable i como un entero sin signo (unsigned int). 
Se utilizará para iterar a través de la cadena de caracteres.

i = 0;: Se inicializa la variable i a cero. 
Esta variable se usará como un índice para recorrer la cadena de caracteres.

while (str[i] != '\0'): Este es un bucle while que se ejecutará mientras el carácter actual de la cadena de caracteres no sea 
el carácter nulo '\0', que indica el final de la cadena. En cada iteración, el bucle incrementará i para avanzar al siguiente carácter 
de la cadena.

i++;: Dentro del bucle, se incrementa la variable i en uno en cada iteración. 
Esto mueve el índice a la siguiente posición en la cadena.

write(1, str, i);: La función write() se utiliza para escribir en el descriptor de archivo 
dado (en este caso, 1, que representa la salida estándar). Toma tres argumentos: el descriptor de archivo, 
un puntero al buffer de datos que se va a escribir (str en este caso) y el número de bytes que se van a escribir 
(i, que es el tamaño de la cadena de caracteres). Por lo tanto, esta línea escribe la cadena de caracteres en la salida estándar.

En resumen, la función ft_putstr recorre la cadena de caracteres str hasta encontrar el carácter nulo que indica el final de la cadena, 
y luego escribe toda la cadena en la salida estándar utilizando la función write().*/