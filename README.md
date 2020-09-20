# Curso Lenguaje C

Este repositorio se ira completando a medida que se haga el curso en la plataforma Platzi.

### Tipos de datos.

#### Basic Types
	(A) Aritmeticos
		short			2 bytes		-32.768 to 32.767
		unsigned short	2 bytes		0 to 65.535

		int 			4 bytes		-2.147.483.648 to 2.147.473.647
		unsigned int	4 bytes		0 to 4.294.967.295

		long 			8 bytes		-9223372036854775808 to 9223372036854775807
		unsigned long	8 bytes		0 to 18446744073709551615

	(B) De Punto FLotante float
		float			4 bytes 	1.2E-38 to 3.4E+38		 6 decimal places
		double			8 bytes		2.3E-308 to 1.7E+308	15 decimal places
		long double		10 bytes	3.4E-4932 to 1.1E+4932	19 decimal places

	(C) void	:Especifica que no hay valor disponible,
				 Se usa en tres escenarios:
					1. Una función retorna un tipo void
					2. Función tiene argumentos de tipo void
					3. Puntero o apuntador que va a la dirección de memoria de un objeto, pero no le importa el tipo de dato que tenga

	(D)	char	: un caracter
		char			1 bytes		-128 to 127
		unsigned char	1 bytes		0 to 255



### Uso y definición de funciones
- Valor Retorno
- Nombre
- Lista argumentos
- Consjunto de isntruciones


### Directivas de pre-compilador
son los instrucciones iniciales, como las sigueintes:
- include <stdio.h>
- include <conio.h>
- include <string.h>
- include <stdlib.h>
- include <math.h>
- include <time.h>
- include <ctype.h>
- include <signal.h>
- include <locale.h>
- include <errno.h>
- include <assert.h>

- Las funciones declaradas en stdio.h pueden clasificarse en dos categorías: funciones de manipulación de ficheros y funciones de manipulación de entradas y salidas. 
- Las funciones que pertenecen a conio.h declara varias funciones útiles para mejorar el rendimiento de la «entrada y salida por consola»
- Las funciones que pertenecen a stdlib.h pueden clasificarse en las siguientes categorías: conversión, memoria, control de procesos, ordenación y búsqueda, matemáticas.
- string.h es un archivo de la Biblioteca estándar del lenguaje de programación C que contiene la definición de macros, constantes, funciones y tipos y algunas operaciones de manipulación de memoria.
- math.h es un archivo de cabecera de la …biblioteca estándar del lenguaje de programación C diseñado para operaciones matemáticas básicas.
- time.h relacionado con formato de hora y fecha es un archivo de cabecera de la biblioteca estándar del lenguaje de programación C que contiene funciones para manipular y formatear la fecha y hora del sistema. (https://es.wikipedia.org/wiki/Time.h)
- ctype.h es un archivo de cabecera de la biblioteca estándar del lenguaje de programación C diseñado para operaciones básicas con caracteres.
- signal.h es un archivo de cabecera definido en la Biblioteca estándar de C para especificar como un programa maneja señales mientras se ejecuta.
- locale.h (https://es.cppreference.com/w/c/locale/LC_categories)
- errno.h (https://es.cppreference.com/w/c/locale/LC_categories)
- assert.h proporcionar una definicion de la macro assert, que imprime un mensaje de error y aborta el programa(https://es.wikipedia.org/wiki/Assert.h)

## Punteros
- Es una memoria
- Contiene direcciones de memoria

En el lenguaje C, el paso por referencia se hace a por medio de punteros.

### Aritmética de punteros

- Podemos incrementar y decrementar los punteros
- Debemos tener cuidado, ya que esta nueva dirección de memoria podria estar ocupada


### Arreglos

Los arreglos tienen una relación con los punteros, de hecho, todos los arreglos son punteros, pero no todos los punteros son arreglos.

Si accedemos a un indice que no existe en un array, no falla, simplemte, se muestra una posici{on de memoria que no corresponde al arreglo.

## String 

- No existe un primitivo para manejo de string en C
- Se usa un puntero a caracter
- los string terminan en el caracter especial \0, debe ser considerado cuando especifiquemos el tamaño


## Argumentos
- Siempre se recibe como primer parametro, el nombre del aplicativo
- Por seguridad, si deseo copiar el tamaño parametro en un arreglo, debo primero verificar el tamaño del arreglo


## Definición de tipos de datos estructurados
- Podemos definir una estructura de la siguiente manera:
```c
struct {
        char name[N];
        int age;
    } person;
``` 
- Podemos usar el arrow ->, para hacer referencia a un apuntador con su atributo, las siguientes lineas son iguales:
1. (*person).age = age; 
2. person->age = age;
  
  
## Alias de tipos de datos
- typedef
- Podemos definir nuestros prtopios tipos de datos partiendo de los ya existentes.
- Ejemplo, si necesitamos un telefono, podemos definir una tipo personalizado, asi, si este cambia, no seria necesario modificarlo mas de una vez.
  
  
## Crear bibliotecas propias
- Una liblioteca o libreria, se divide en dos archivos, Encabezados e Implementación
- para compilar, debo incluir el archivo de la implementación tambien, esto se conoce como linkeo
- Example: gcc -Wall v19_my_lib_usage.c v19_my_lib.c -o v19_my_lib

## Manejo dinámico de la memoria
- malloc: guarda la memoria para un dato nuevo si la lista está vacia
- realloc: guarda memoria para un elemento mas en la lista


### Memory leaks y Garbage Collectors

- Con free(), podemos liberar la memoria, entre los parentesis ponemos la primera dirección del apuntador.
- Para cuando es tan fácil, debemos usar Valgrind.

Recomendaciones para un uso correcto de la memoria, inicializar los punteros con null y validar antes de reservar la memoria, como en el ejemplo v22_leak.c

### Listas enlazadas
- Encadena nodos, y hace uso de memoria no continúa

### Libreria Math
- Operaciones matematicas
- Agremar -lm (library math), para compilar
- ctime(), permite combertir una fecha en un string

### Archivos
- FILE

modos de operación:
- "r" : abrir un archivo para lectura, el fichero debe existir.
- "w" : abrir un archivo para escritura, se crea si no existe o se sobreescribe si existe.
- "a" : abrir un archivo para escritura al final del contenido, si no existe se crea.
- "r+" : abrir un archivo para lectura y escritura, el fichero debe existir.
- "w+" : crear un archivo para lectura y escritura, se crea si no existe o se sobreescribe si existe.
- "r+b ó rb+" : Abre un archivo en modo binario para actualización (lectura y escritura).
- "rb" : Abre un archivo en modo binario para lectura.