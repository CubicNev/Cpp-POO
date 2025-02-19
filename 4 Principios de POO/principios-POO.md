# Principios de la Programación Orientada a Objetos

## Encapsulación

Por seguridad, se ocultan los atributos/variables de un objeto para que solo sean accedidas por una función interna del objeto. Es una forma segura de realizar las acciones internas de un objeto.

De esta forma se tiene más control sobre el objeto, todo se debe modificar dentro de los metodos de la clase.

Las palabras clave de control de acceso son:

- **`public`** - Los miembros son accesibles desde cualquier parte del código. Esto significa que cualquier objeto o función puede acceder y modificar estos miembros
- **`private`** - Los miembros solo son accesibles desde dentro de la misma clase. Esto ayuda a proteger los datos y a mantener la integridad de los mismos.
- **`protected`** - Los miembros son accesibles desde la misma clase y desde las clases derivadas (subclases). Esto permite que las subclases accedan a ciertos datos o métodos de la clase base mientras los mantienen ocultos para otros usuarios.

```c++
class Objeto {
private:
    int number;
protected:
    int identificator;
public:
    Objeto(int n, int i) : number(n), identificator(i) {}
};
```

> 📝 **Nota:** El constructor es util para acceder de incio a las variables muembro del objeto, hay un modo abreviado en [**`07-encapsulacion.cpp`**](./07-encapsulacion.cpp)

## Puntero `this`

Permite hacer una autoreferencia dentro del objeto. Es útil para que un objeto realice operaciones sobre sí misma resolviendo ambiguedades y permitiendo seguir buenas prácticas (como es un constructor que tenga parámetros con el mismo nombre de los atributos).

```c++
class Objeto {
private:
    int number;
protected:
    int identificator;
public:
    Objeto(int number, int identificator) {
        this->number = number;
        this->identificator = identificator;
    }
};
```

Al poder autoreferenciar un objeto podemos hacer funciones que retornen el mismo objeto. Haciendo `Objeto &funcion(string param)`, se retorna la referencia al mismo objeto.

```c++
Objeto &funcion(string param) {
    // Do something
    return *this;
}
```

En main se podria hacer algo así:

```c++
o->funcion("Hello world!").otraFuncion();
```

> 📝 **Nota:** Con el punto `.` se acceden a los métodos y atributos de un  objeto, es como si `o->funcion("Hello world!")` se tranformara en `o`.

No se debe confundor con `Objeto funcion(string param)`, ya que esta notación indica que se retorna un nuevo objeto.

```c++
Objeto funcion(string param) {
    // Do something
    return *this;
}
```

> 📝 **Nota:** Aqui se realiza una copia del objeto actual.

## Static

La capacidad de las clases para mantener métodos o atributos estáticos. Es una forma en la que las clases pueden intercambiar mensajes sin tener que realizar una implementación por cada copia del objeto.

Todas las clases comparten un registro de memoria. Para esto se utiliza la palabra reservada **`static`** al inicio de cada atributo.

```c++
static int contador_global;
```

Los atributos y métodos estáticos no pueden ser accedidos de forma dinámica, los miembros (funciones y atributos) definidos dentro de una clase van a pertenecer unicamente a esa clase en cuestión.

### Scope resolution operator `::`

C++ perimite definir los metodos fuera del cuerpo de la clase usando el nombre de la clase, mediante el *scope resolution operator* `::`. Se usa para accesar a los identificadores, como nombres de variables y funciones. [1]

Su sintaxis es:

```c++
scope_name::identifier
```

Aplicaciones:

- Acceder a variables globales.
- Resolver conflictos de ambigüedad, que se dan poe usar distintos espacios de nombre.
- Definir miembros de clase fuera de una clase.
- Acceder a miembros estaticos.
- Hacer referencias a clases miembro o clases derivadas (herencia).

### Ejemplo

En este caso, nos es util para intercambiar mensajes entre clases. De forma que las distintas copias de las clases, se deben seguir ciertas restricciones al momento de escribir el código. En el siguiente ejemplo se vel algunas de las restricciones que se deben seguir para compartir datos entre clases.

```c++
class Objeto {
private:
    int identificador;
public:
    static int contador;

    // Solo se declara el constructor
    Objeto(int identificador);
};

// Inicialización de variable estática, se hace de forma externa
int Objeto::contador = 0;

// Se aumenta el contador cada que se crea un nuevo objeto
Objeto:Objeto(int identificador) {
    this->identificador = identificador;
    contador++;
}

int main(){
    Objeto *o1 = new Objeto(123);
    Objeto *o2 = new Objeto(321);

    cout << " Numero de objetos: " <<  Objeto::contador << endl;
}

```

## Herencia

<!-- Referencias -->

[1]: <https://www.geeksforgeeks.org/scope-resolution-operator-in-c/> "Operador ::"
