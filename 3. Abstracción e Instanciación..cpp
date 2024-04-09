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
    persona1.setNombre("Pablo");
    persona1.setEdad(18);
    persona1.setOcupacion("Ingeniero");

    std::cout << "Nombre: " << persona1.getNombre() << std::endl;
    std::cout << "Edad: " << persona1.getEdad() << std::endl;
    std::cout << "Ocupacion: " << persona1.getOcupacion() << std::endl;

    return 0;
}

