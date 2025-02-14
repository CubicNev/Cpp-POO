# Estructuras de datos

Hasta el momento se han visto variables de tamaño fijo, y listas para colecciones o variables de tamaño variable. Sin embargo, solo se pueden hacer listas con elementos de un mismo tipo.

Existen formar de definir tus propias estrucuturas de datos y tipos personalizados para poder utilizarlos drurante la ejecicuón del programa y haciendolo versatil. Esto es gracias a los punteros.

## Ejemplo

Recordando una lista de caracteres se crea de la siguiente forma:

```c++
char texto[] = "hola";
```

Otra forma menos abreviada sería la siguiente:

```c++
char texto[] = {'h', 'o', 'l', 'a'};
```

Dentro de la memoria, la computadora guarda cada elemento en un espacio de memoria distinto. Por lo que podemos hacer una forma de declarar una lista de carácteres con punteros.

```c++
char *texto = (char *)"hola";
```

Cada letra se almacena en un registro de memoria.

## Estrucuturas personalizadas
