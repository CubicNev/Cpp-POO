# Introducción a la Programación Orientada a Objetos

Es la gran diferencia entre C y C++. Es el paradigma que Jern Strolldtruft agregó al compilador de C para crear C++.

## ¿Qué es la POO?

Un **objeto** es una **entidad** que puede existir en el mundo físico o no. Cumple con ciertas carácteristicas:

- ***Class***. Tiene una **clase**, es decir es cierto tipo de objeto.
- ***Object***. Da una identidad.
- ***Properties***. Son carácteristicas que son descriptivas.
- ***Method***. Son las acciones que el objeto puede hacer.

En POO se busca escribir programas pensando en entidades y cómo estas funcionan y colaboran para intercambiar información. Por ejemplo, si quisieramos modelar en una empresa a una Persona podemos decir que esta tiene un correo electrónico institucional, que puede realziar acciones como enviar correos, etc.

![Ejemplo de objeto](./assets/ejemploObjeto.png)

![Ejemplo Objeto Pikachu](./assets/pikaObject.png)

A diferencia de una estrucutura de datos, ya no solo almacenamos información, si no que también se agrea un coportamiento a la identidad de cada objeto/entidad.

En C++, así como en otros lenguajes, la POO es una serie de conceptos que se implementan al momento de programar.

## Abstracción

Es la capacidad de realizar programas a partir de definiciones abstractas, por medio de solo mostrar la información esencial y ocultar los detalles de implemetación.

## Encapsulación

Es la capacidad de agrupar datos bajo una misma unidad.

Una clase puede ocultar características para hacerlas inaccesibles a los demás.

## Implementación

Un objeto inicia como una clase, una clase se declara con la palabra reservada `class`. La forma de encapsular los atributos de una clase de manera que se puedan acceder en cualquier parte del programa es cusando la palabra reservada `public`.

```c++
class Persona {
public:
    // Propiedades
    string nombre = "Diana";
    int edad = 26;
};
```

Se puede hacer uso de memoria estática o dinámica, de la misam forma que con las estrucuturas de datos.

```c++
// Forma estatica
Persona p = Persona();
cout << p.nombre << endl;

// Forma dinámica
Persona *P = new Persona();
cout << P->nombre << endl;
```

Se puede añadir comportamiento a los objetos, en este caso se agrega la función **`saludar()`**.

```c++
class Persona {
public:
    // Propiedades
    string nombre = "Diana";
    int edad = 26;

    // Comportamiento
    void saludar() {
        cout << "Hola! Soy " << nombre << endl;
    }
};

int main() {
    // Forma estatica
    Persona p = Persona();
    p.saludar();

    // Forma dinámica
    Persona *P = new Persona();
    P->saludar();

    return 0;
}
```

Las ventajas de implementar comportamiento a los objetos es que se les puede asignar un comportamiento individual a cada objeto.

Puede verse el ejemplo implemetado [aqui](./05-clasePersona.cpp)
