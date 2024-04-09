#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream archivo("datos.txt", std::ios::app);
    if (!archivo) {
        std::cerr << "Error al abrir el archivo." << std::endl;
        return 1;
    }

    std::string nombre;
    int edad;

    std::cout << "Ingrese el nombre: ";
    std::getline(std::cin, nombre);
    std::cout << "Ingrese la edad: ";
    std::cin >> edad;

    archivo << nombre << "," << edad << std::endl;

    archivo.close();
    std::cout << "Datos almacenados correctamente en el archivo." << std::endl;

    return 0;
}

