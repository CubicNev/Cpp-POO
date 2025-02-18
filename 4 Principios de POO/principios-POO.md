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
