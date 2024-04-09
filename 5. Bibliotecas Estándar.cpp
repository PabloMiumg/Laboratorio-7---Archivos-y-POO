#include <iostream>
#include <string>

class Persona {
private:
    std::string nombre;
    int edad;
    std::string ocupacion;

public:
    void setNombre(const std::string& n) {
        nombre = n;
    }

    void setEdad(int e) {
        edad = e;
    }

    void setOcupacion(const std::string& o) {
        ocupacion = o;
    }

    std::string getNombre() const {
        return nombre;
    }

    int getEdad() const {
        return edad;
    }

    std::string getOcupacion() const {
        return ocupacion;
    }
};

int main() {
    Persona persona1;
    std::string nombre;
    int edad;
    std::string ocupacion;

    std::cout << "Ingrese el nombre: ";
    std::getline(std::cin, nombre);
    persona1.setNombre(nombre);

    std::cout << "Ingrese la edad: ";
    std::cin >> edad;
    persona1.setEdad(edad);

    std::cin.ignore(); 
    std::cout << "Ingrese la ocupacion: ";
    std::getline(std::cin, ocupacion);
    persona1.setOcupacion(ocupacion);

    std::cout << "Nombre: " << persona1.getNombre() << std::endl;
    std::cout << "Edad: " << persona1.getEdad() << std::endl;
    std::cout << "Ocupacion: " << persona1.getOcupacion() << std::endl;

    return 0;
}

