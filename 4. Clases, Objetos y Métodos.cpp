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

class Estudiante : public Persona {
private:
    int numeroEstudiante;
    float promedioCalificaciones;

public:
    void setNumeroEstudiante(int num) {
        numeroEstudiante = num;
    }

    void setPromedioCalificaciones(float promedio) {
        promedioCalificaciones = promedio;
    }

    int getNumeroEstudiante() const {
        return numeroEstudiante;
    }

    float getPromedioCalificaciones() const {
        return promedioCalificaciones;
    }
};

int main() {
    Estudiante estudiante1;
    estudiante1.setNombre("Pablo");
    estudiante1.setEdad(18);
    estudiante1.setOcupacion("Estudiante");
    estudiante1.setNumeroEstudiante(8013);
    estudiante1.setPromedioCalificaciones(8.5);

    std::cout << "Nombre: " << estudiante1.getNombre() << std::endl;
    std::cout << "Edad: " << estudiante1.getEdad() << std::endl;
    std::cout << "Ocupacion: " << estudiante1.getOcupacion() << std::endl;
    std::cout << "Numero de Estudiante: " << estudiante1.getNumeroEstudiante() << std::endl;
    std::cout << "Promedio de Calificaciones: " << estudiante1.getPromedioCalificaciones() << std::endl;

    return 0;
}

