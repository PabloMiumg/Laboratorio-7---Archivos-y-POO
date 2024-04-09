#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> nombres;
    nombres.push_back("Juan");
    nombres.push_back("Maria");
    nombres.push_back("Pedro");
    nombres.push_back("Ana");
    nombres.push_back("Luis");

    // Ordenamiento utilizando el algoritmo de burbuja
    for (std::vector<std::string>::size_type i = 0; i < nombres.size() - 1; ++i) {
        for (std::vector<std::string>::size_type j = 0; j < nombres.size() - i - 1; ++j) {
            if (nombres[j] > nombres[j + 1]) {
                std::swap(nombres[j], nombres[j + 1]);
            }
        }
    }

    // Mostrar los nombres ordenados
    for (std::vector<std::string>::size_type i = 0; i < nombres.size(); ++i) {
        std::cout << nombres[i] << std::endl;
    }

    return 0;
}

